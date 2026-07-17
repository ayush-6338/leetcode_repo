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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> ans;
        if(root == nullptr) return ans; 
        q.push(root);
        bool leftToRight = true;

        while(!q.empty()){
            int levelSize = q.size();
            vector<int> levelEle;

            for(int i = 0;i<levelSize;i++){
                TreeNode* temp = q.front();
                q.pop();

                levelEle.push_back(temp->val);

                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            if(!leftToRight){
                reverse(levelEle.begin(),levelEle.end());
            }
            ans.push_back(levelEle);

            leftToRight = !leftToRight;

        }
        return ans;
    }
};