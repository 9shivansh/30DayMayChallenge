class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        stack<int> S;
        vector<int> ans(T.size(),0);
        for(int i=0;i<T.size();i++){
            if(S.empty() || T[S.top()]>T[i]) S.push(i);
            else {
                while(!S.empty() && T[S.top()]<T[i]){
                    auto t=S.top();
                    ans[t]=i-t;
                   S.pop();
                }
                S.push(i);
            }
        }
        return ans;
    }
};