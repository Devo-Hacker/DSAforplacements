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
int height(TreeNode* root, int &chain){
    if(root == NULL) return 0;
    int lh = height(root->left, chain);
    int rh = height(root->right, chain);
    chain = max(chain, lh+rh);
    return 1 + max(lh, rh);
}
    int diameterOfBinaryTree(TreeNode* root) {
        int chain = 0;
        height(root, chain);
        return chain;
    }
};