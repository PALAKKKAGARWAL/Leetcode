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
        vector<vector<int>> ans;
        bool lefttoright = true;
        queue<TreeNode*> q;
        if(root==NULL){
            return ans;
        }
        q.push(root);
        
        while(!q.empty()){
            vector<int> level;
            int n = q.size();
            for(int i=0;i<n;i++){
                TreeNode* p = q.front();
                level.push_back(p->val);
                q.pop();
                if(p->left!=NULL){
                    q.push(p->left);
                }
                if(p->right!=NULL){
                    q.push(p->right);
                }
            }
           
        
        if(!lefttoright){
            reverse(level.begin(),level.end());
        }
         ans.push_back(level);
         lefttoright = !lefttoright;
        }
        return ans;
       
    }
};