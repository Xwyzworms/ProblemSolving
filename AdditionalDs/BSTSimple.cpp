#include<iostream>


struct node 
{
    /* data */
    int key;
    node* left;
    node* right;
};

struct node *newNode(int item) 
{
    // Pesan memory dengan size node habis itu ubah simpan alamatnya;
    node* temp = (struct node *) malloc(sizeof(struct node));
    temp->key = item;

    temp->left= nullptr;
    temp->right = nullptr;
}
struct node* insert(struct node* node, int key) 
{
    if(node == nullptr) 
    {
        return newNode(key);
    }   

    if(key < node->key) 
    {
        // We should attach it 
        node->left =  insert(node->left, key);
    }
    else if(key > node->key) 
    {
        node->right = insert(node->right, key);
    }

    // Return the caller node
    return node;

}

void traverseBst(node* root ) 
{
    // Basically doing some printing shit
    if(root != nullptr) 
    {
        traverseBst(root->left);
    }

    std::cout<<root->key<<" ";

    traverseBst(root->right);
}

int main() 
{
 // TODO TOMORROW    
    return 0;
}