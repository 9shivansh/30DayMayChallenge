class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int size = nums.size();
        int a;
        for(int i = 0; i < size; i++)
        {
            if(i == 0)
            {
                a = nums[i];
            }
            
            else
            {
                a = a ^ nums[i];
            }
        }
        
        return a;
    }
};


// XOR of different numbers is 0 when both the numbers are same
// we need to keep in mind that only XOR of 2 numbers is 0
// if we need to cancel out the same numbers from the array, we can always take XOR of all the elements
// and the numbers left are those that cannot be formend into pairs