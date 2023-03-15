#include<iostream>
#include<algorithm>
#include<vector>
class Heap 
{
    int data;
    Heap *left, *right;
public :
    Heap *root = NULL;
//Default Constructor
    Heap();

// Parameterized constructor/ for inserting later
    Heap(int);

// Insert Function
    Heap* Insert(Heap*, int);


// Insert for BST
    Heap* InsertBst(Heap*, int);
// Create RandomBst
    Heap CreateBST(std::vector<int>);

// Print the heap 
    void Print(Heap*);
};


Heap::Heap() : data(0), left(NULL), right(NULL){}

// Default params 
Heap::Heap(int value) 
{
    data = value;
    left = NULL;
    right = NULL;
};

Heap Heap::CreateBST(std::vector<int> data)
{
    // FIX THIS BUG 
    Heap h;
    this->root = h.InsertBst(this->root, data[0]);   
    for(int i =1 ; i< data.size(); i++) 
    {
        h.InsertBst(root, data[i]);
    }
    return h;
}

void Heap::Print(Heap* heap) 
{
    if(!heap) 
    {
        return ;
    }

    Print(heap->left);
    std::cout<<heap->data<<std::endl;
    Print(heap->right);
}

Heap* Heap::InsertBst(Heap* heap, int value) 
{
    if(!heap) 
    {
        return new Heap(value);
    }

    if(value > heap->data) 
    {
        heap->right = InsertBst(heap->right, value);
    }
    else if(value < heap->data) 
    {
        heap->left = InsertBst(heap->left, value);
    }

    return heap;

}
Heap* Heap::Insert(Heap* heap, int value) 
{
    if(!heap) 
    {
        return 0;
    }

    return heap;
}
int main () 
{
    Heap h;
    std::vector<int> vect {3,40,23,12,2,20,30};
    h = h.CreateBST(vect);
    h.Print(h.root);
    return 0;
}