class Solution {
public:
    int minSetSize(vector<int>& arr) 
    {
        unordered_map<int, int> mp;
        
        int size = arr.size();
        
        for(int i = 0; i < size; i++)
        {
            mp[arr[i]]++;
        }
        
        int sum = 0;
        
        
        vector<int> occurence;
        
        for(auto it : mp)
        {
            //cout << it.second;
            occurence.push_back(it.second);
        }
        
        sort(occurence.begin(), occurence.end(), greater<int>());
        
        int sizeV = occurence.size();
        
        int half = size / 2;
        
        int count = 0;
        
        for(int i = 0; i < sizeV; i++)
        {
            //cout << occurence[i] << endl;
            
            sum = sum + occurence[i];
            
            //cout << sum << endl;
            
            //cout << "--------------" << endl;
            
            if(sum >= half)
            {
                return i + 1;
            }
        }
        
        return -1;
        
        
    }
};


// first find the occurence of all the elements in the array
// if at any point, count of occurence of any element is bigger than that of size / 2
// return the count of those elements
