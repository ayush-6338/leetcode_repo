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
    void findAns(TreeNode* root, int lo,int hi, int& sum){
        if(root == nullptr) return;
        if(root->val >= lo && root->val <= hi){
            sum += root->val;
        }
        if(root->left) findAns(root->left,lo, hi, sum);
        if(root->right) findAns(root->right , lo, hi, sum);
        return;
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum = 0;
        findAns(root,low,high,sum);
        return sum;
    }
};