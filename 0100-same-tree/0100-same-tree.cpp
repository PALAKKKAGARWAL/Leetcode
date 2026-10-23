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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        TreeNode* node1 =p;
        TreeNode* node2 =q;
        if(node1== NULL && node2==NULL){
            return true;
        }
        if(node1==NULL || node2==NULL){
            return false;
        }
        if(node1->val!=node2->val){
            return false;
        }
        return isSameTree(node1->left,node2->left)&&
        isSameTree(node1->right,node2->right);
        

    }
};