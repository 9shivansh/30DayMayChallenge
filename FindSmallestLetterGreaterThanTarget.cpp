class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) 
    {
        if(target>=letters[letters.size()-1])
        {
            return letters[0];
        }
        int low=0;
        int high=letters.size();
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(letters[mid]==target || letters[mid]<target)
            {
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return letters[low];
    }
};