class Solution {
public:
    void merge(vector<int>& nums, int low, int mid, int high) {
        int leftLength = mid-low + 1;
        int rightLength = high -mid; // high-(mid+1)+1
        vector<int> leftList(nums.begin()+low, nums.begin()+mid+1);
        vector<int> rightList(nums.begin()+mid+1, nums.begin()+high+1); 
        int i=0,j=0,cur=low;
        while(i<leftLength && j<rightLength){
            if (leftList[i]<rightList[j]){
                nums[cur] = leftList[i];
                i++;
                cur++;
            } else {
                nums[cur] = rightList[j];
                j++;
                cur++;              
            }   
        }
        while(i<leftLength){
            nums[cur] = leftList[i];
            i++;
            cur++;
        }
         while(j<rightLength){
            nums[cur] = rightList[j];
            j++;
            cur++;
        }        
    }
    void mergeSortHelper(vector<int>& nums, int low, int high) {
        if (low<high){
            int mid = (high-low)/2 + low;
            mergeSortHelper(nums, low, mid);
            mergeSortHelper(nums, mid+1, high);
            merge(nums, low, mid, high);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        mergeSortHelper(nums, 0, nums.size()-1);
        return nums;
    }
};