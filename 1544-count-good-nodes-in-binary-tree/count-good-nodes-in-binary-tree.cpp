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
int blue(TreeNode* root, int bluenodes){
    if(root == NULL) return 0;
    int count = 0;
    if(root->val >= bluenodes) count = 1;
    bluenodes = max(bluenodes ,root->val);

    count += blue(root->left, bluenodes);
    count += blue(root->right, bluenodes);

    return count;

}
    int goodNodes(TreeNode* root) {
        
        return blue(root, root->val);
    }
};