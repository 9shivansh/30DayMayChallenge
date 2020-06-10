/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
	vector<string> res;
	help(res, root, "");
	return res;
}
void help(vector<string>& res, TreeNode* root, string pre) {
	if (!root)
		return;
	if (!root->left && !root->right) {
		res.push_back(pre + to_string(root->val));
		return;
	}
	help(res, root->left, pre + to_string(root->val) + "->");
	help(res, root->right, pre + to_string(root->val) + "->");
}
};