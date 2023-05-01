#include<iostream>

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
    
    TreeNode() : data(0), left(nullptr), right(nullptr) {}
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
    TreeNode(int val, TreeNode* left, TreeNode* right ) : data(val), left(left), right(right) {}
};   

class BST {
    public:
    TreeNode* InsertBST(TreeNode* root, int val) 
    {
        if(root == NULL) 
        {
            return new TreeNode(val);
        }   

        if(val > root->data ) {
          root->right =  InsertBST(root->right, val);
        }else if(val < root->data) {
            root->left = InsertBST(root->left, val);
        }
       
       // Return the updated node
        return root;

    }
    void printBst(TreeNode* root) 
    {
        // Todo later
        
    }
    int getMinimumRecursive(TreeNode* root) {
        
        if(root->left == NULL) return root->data;

        return getMinimumRecursive(root->left);
        
    }
    int getMinimumIterative(TreeNode* root) 
    {
        if(root != NULL) 
        {
            while(root->left != NULL) {
                root = root->left;
            }
            return root->data;
        }
        return NULL;
    }

    int getMaximumRecursive(TreeNode* root) {

        if(root->right == NULL) return root->data;
        return getMaximumRecursive(root->right);
    }
    int sumOfBinarySearchTreeRecursively(TreeNode* root) 
    {
        if(root == NULL) 
        {
            return NULL;
        }
        return root->data + sumOfBinarySearchTreeRecursively(root->left) + sumOfBinarySearchTreeRecursively(root->right);
    }

    int sumOfBinarySearchTreeInterative(TreeNode* root) {
       // Nah thank you, Broo are you sure you want to do this ? nah m8
    }

    int getMaximumIterative(TreeNode* root) {

        if(root != NULL) 
        {
            while(root->right != NULL) 
            {
                root = root->right;
            } 
            return root->data;
        }
        return NULL;
    }

    int getMaximum() {
        return 0;
    }
};


int main() {

    BST bst = BST();
    TreeNode *t1 = new TreeNode();
    bst.InsertBST(t1, 10);

}