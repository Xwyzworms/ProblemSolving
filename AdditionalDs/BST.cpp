#include<iostream>

template<typename T>
class BSTNode {
public:
    T data;
    BSTNode* left;
    BSTNode* right;

    BSTNode(T data ) 
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;

    }

    //Recursive Destructor
    ~BSTNode() 
    {
        delete left;
        delete right;
    }
};

void printBST(BSTNode<int>* root) 
{
    if(root == NULL) 
    {
        return;
    }
    std::cout<<root->data<<std::endl;
    printBST(root->left);
    printBST(root->right);
}

void printBSTDetail(BSTNode<int>* root) 
{
    if (root == NULL)
    {
        return ;
    }
    std::cout<<root->data<< ": ";
    if(root->left != NULL) 
    {
        std::cout<<" L "<<root->left->data;
    } 
    if(root->right != NULL) 
    {
        std::cout<<" R "<<root->right->data;
    }
    std::cout<<std::endl;
    printBSTDetail(root->left);
    printBSTDetail(root->right);
}

BSTNode<int>* createInput() 
{
    int rootData; 
    std::cout<<"Enter data "<<std::endl;
    std::cin>>rootData;

    if(rootData == -1) 
    {
        return NULL;
    }

    BSTNode<int>* node = new BSTNode<int>(rootData);
    // Create Connection between childs
    BSTNode<int>* leftChild = createInput();
    BSTNode<int>* rightChild = createInput();
    node->left = leftChild;
    node->right = rightChild;

    return node;
}

int main() 
{

    /*
    
    BSTNode<int>* root = new BSTNode<int>(1);
    BSTNode<int>* n1 = new BSTNode<int>(2);
    BSTNode<int>* n2 = new BSTNode<int>(3);
    
    root->left = n1;
    root->right = n2;
    
    */
    
    BSTNode<int>* root = createInput();
    // Delete the whole true
    printBSTDetail(root);    
    return 0;
}