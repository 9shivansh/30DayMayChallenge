class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
    vector<int> res(triangle.size(), triangle[0][0]);
    for (unsigned int i = 1; i < triangle.size(); i++) 
        for (int j = i; j >= 0; j--) {
            if (j == 0)
                res[0] += triangle[i][j];
            else if (j == i)
                res[j] = triangle[i][j] + res[j-1];
            else 
                res[j] = triangle[i][j] + min(res[j-1], res[j]);
        }
    return *min_element(res.begin(), res.end());
}
};