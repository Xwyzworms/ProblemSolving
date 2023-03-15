#include <iostream>

class BST
{
    int data;
    BST *left, *right;

public:
    // Defult constructor
    BST();

    // Parametrized COnstructor
    BST(int);

    // Insert function
    BST *Insert(BST *, int);

    //Print the BinarySearchTree
    void Print(BST *);
};
// Default constructor
BST::BST() : data(0), left(NULL), right(NULL) {}

// Default params Constructor
BST::BST(int value)
{
    data = value;
    left = NULL;
    right = NULL;
}
void BST::Print(BST *root) 
{
    if(!root) 
    {
        return;
    }
    Print(root->right);
    std::cout<<root->data<<std::endl;
    Print(root->left);
}
BST *BST::Insert(BST *root, int value)
{
    // If there's no binary search tree , then create one
    if (!root)
    {
        return new BST(value);
    }

    if (value > root->data)
    {
        root->right = Insert(root->right, value);
    }

    else if (value < root->data)
    {
        root->left = Insert(root->left, value);
    }
    //
    return root;
};

int main()
{
    // Data [50,20,45,100,24,33,4,5]
    BST b, *root = NULL;
    root = b.Insert(root, 50);
    b.Insert(root, 20);
    b.Insert(root, 45);
    b.Insert(root, 100);
    b.Insert(root, 24);
    b.Insert(root, 33);
    b.Insert(root, 4);
    b.Insert(root, 5);
    b.Print(root);
    
}
