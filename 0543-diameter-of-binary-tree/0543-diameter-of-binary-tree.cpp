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
 // max(lh+rh)
class Solution {
public:
    int maxx=0;
    int Tree(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        
        int lh = Tree(root->left);
        int rh = Tree(root->right);
        maxx = max(maxx,lh+rh);
        return 1+ max(lh,rh);
    }
    int diameterOfBinaryTree(TreeNode* root){
        
        Tree(root);
        return maxx;
    }
};