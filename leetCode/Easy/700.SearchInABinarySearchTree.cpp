#include<iostream>
#include<vector>
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x ) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right ) : val(x), left(left), right(right){}
};

class Solution {
    public:
        TreeNode* searchBST(TreeNode* root, int val){

            if(root == NULL) 
            {
                return NULL;
            }   

            if(root->val == val) return root;
            
            if(val > root->val ) {
                // Go right
               return searchBST(root->right, val);
            }   

            if(val < root-> val ) {
                // Go left 
                return searchBST(root->left, val);
            }  

            return NULL;
            
        } 

};