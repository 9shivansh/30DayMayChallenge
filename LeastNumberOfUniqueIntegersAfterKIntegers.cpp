class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) 
    {
        unordered_map<int, int> map;
        
        int size = arr.size();
        
        for(int i = 0; i < size; i++)
        {
            map[arr[i]]++;
        }
        
        vector<int> occurences;
        
        for(auto it : map)
        {
            occurences.push_back(it.second);
        }
        
        sort(occurences.begin(), occurences.end());
        
        size = occurences.size();
        
        for(int i = 0; i < size; i++)
        {
            k = k - occurences[i];
            
            if(k < 0)
            {
                return size - i;
            }
            
        }
        
        return 0;
    }
};