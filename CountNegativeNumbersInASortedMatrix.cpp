class Solution {
public:
    /* Idea: the central idea is to iterate each row in the matrix and find out 
	 *  the position of the first negative value. Because each row is sorted,
	 *  all elements after this postion are all negative. 
	 *  complexity: suppose the matrix is n*m, iterate n rows takes linear time, 
	 *  and binary search on each row taks log m, in total O(n * log m).
	 *  Improvement: This approach could also apply on columns, thus the running time
	 *   would be O(m * logn). We could check n and m before deciding which approachs 
	 *   to take. 
	 */
	int countNegatives(vector<vector<int>>& grid) {
        std::ios_base::sync_with_stdio(false);
        int sum = 0;
        for (const auto& row : grid) {
            // 1. find the negative in each row
            int idx = findNegative(row);
            sum += grid[0].size() - idx;
        }
        return sum;
    }
    
    int findNegative(vector<int> vec) {
        int low = 0, high = vec.size();
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (vec[mid] < 0) 
                high = mid;
            else
                low = mid + 1;
        }
        return low;
    }
};