class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        int size = intervals.size();
        
        if(size < 2)
        {
            return intervals;
        }
     
        stack<pair<int, int>> st;
        
        sort(intervals.begin(), intervals.end());
        
        st.push({intervals[0][1], 0});
        
        vector<vector<int>> result;
        
        
        
        
        
        for(int i = 1; i < size; i++)
        {
            cout << st.top().first << endl;
            cout << intervals[i][0] << endl;
            if(st.top().first >= intervals[i][0])
            {
                st.top().first = max(st.top().first, intervals[i][1]);
                cout << st.top().first;
            }
            
            else
            {
                vector<int> temp;
                int a = intervals[st.top().second][0];
                int b = st.top().first;
                st.pop();
                temp.push_back(a);
                temp.push_back(b);
                
                result.emplace_back(temp);
                
                st.push({intervals[i][1], i});
            }
        }
        
        
        if(!st.empty())
        {
            int a = intervals[st.top().second][0];
            int b = st.top().first;
            
            st.pop();
            
            vector<int> temp;
            temp.push_back(a);
            temp.push_back(b);
            
            result.emplace_back(temp);
        }
        
        return result;
        
    }
};