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
int computeMaxPath(TreeNode* root, int &maximum){
    if(root==NULL) return 0;
    int left = max(0, computeMaxPath(root->left, maximum));
    int right = max(0, computeMaxPath(root->right, maximum));
    maximum = max(maximum, left + right + root->val);
    return root->val + max(left, right);
}
    int maxPathSum(TreeNode* root) {
        int maximum = INT_MIN;
        computeMaxPath(root, maximum);
        return maximum;
    }
};