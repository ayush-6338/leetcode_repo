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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* node = new TreeNode(val);
        if(root == nullptr){
            return node;
        }
        
        if(root->val<val){
            if(!root->right){
                root->right = node;
                return root;
            }
            insertIntoBST(root->right , val);
            
        } 
        if(val < root->val){
            if(!root->left){
                root->left = node;
                return root;
            }
            insertIntoBST(root->left,val);

        } 
        return root;
    }
};