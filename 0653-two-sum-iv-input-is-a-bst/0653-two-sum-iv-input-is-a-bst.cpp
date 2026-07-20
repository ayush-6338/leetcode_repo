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
    set<int> st;
    bool findTarget(TreeNode* root, int k) {
        int tar = k - root->val;
        bool ans  = false;
        if(st.count(tar)== 1) return true;

        st.insert(root->val);
        if(root->left) ans = ans || findTarget(root->left , k) ;
        if(root->right) ans = ans || findTarget(root->right , k) ; 
        
        return ans;
    }
};