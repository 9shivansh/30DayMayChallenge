class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
    vector<int> a;
    for(int i=0;i<arr.size();i++){
        a.push_back(arr[i]);
        if(arr[i]==0){
            a.push_back(0);
        }
        if(a.size()>=arr.size()){
            break;
        }
    }
    if(a.size()!=arr.size())
        a.pop_back();
    arr=a;
}
};