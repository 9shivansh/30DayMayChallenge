class Solution {
public:
    int trap(vector<int>& height) 
    {
        int size = height.size();
        int sum = 0;
        
        for(int i = 0; i < size; i++)
        {
            int leftMax = 0;
            int rightMax = 0;
            
            for(int j = i - 1; j > -1; j--)
            {
                leftMax = max(leftMax, height[j]);
            }
            
            for(int k = i + 1; k < size; k++)
            {
                rightMax = max(rightMax, height[k]);
            }
            
            cout << leftMax << " " << rightMax << endl;
            
            if(min(leftMax, rightMax) - height[i] > 0)
            {
                sum += min(leftMax, rightMax) - height[i];
            }
            
            
            
            cout << sum << endl;
        }
        
        return sum;
        
    }
};