class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int size = height.size();
        
        int start = 0;
        
        int end = size - 1;
        
        int maxArea = 0;
        
        while(start < end)
        {
            int area = (end - start) * min(height[start], height[end]);
            maxArea = max(area, maxArea);
            
            
            if(height[start] < height[end])
            {
                start = start + 1;
            }
            
            else
            {
                end = end - 1;
            }
        }
        
        return maxArea;
        
    }
};