class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int start = 0;
        int end = height.size() - 1;
        int max = 0;
        int area = 0;
        
       while(start < end) 
       {
            if (height[start] == height[end]) {
                area = height[start] * (end - start);
                start++;
                end--;
            } else if (height[start] > height[end]) {
                area = height[end] * (end - start);
                end--;
            } else {
                area = height[start] * (end - start);
                start++;
            }
            if (max < area) {
                    max = area;
                }
        }
        return max;
    }
};