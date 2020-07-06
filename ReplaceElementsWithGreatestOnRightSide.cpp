class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) 
    {
        int size = arr.size();
        
        stack<int> stack;
        
        for(int i = 0; i < size; i++)
        {
            stack.push(i);
        }
        
        int max = -1;
        
        while(!stack.empty())
        {
            int temp = arr[stack.top()];
            
            //cout << temp << " ";
            
            arr[stack.top()] = max;
            
            
            
            
            if(temp > max)
            {
                max = temp;
            }
            
            stack.pop();
        }
        
        return arr;
        
    }
};