#include<iostream>
#include<vector>

void swap(int *a, int *b) 
{
    int temp = *b;
    *b = *a;
    *a = temp;
}

void heapify(std::vector<int> &ht, int i) 
{

    int sizeArr = ht.size();
    int largest = i;

    int left = 2 * i + 1;
    int right =2 * i + 2;

    // Make sure it is < currentSizeArray
    if(left < sizeArr && ht[left] > ht[largest] ) 
    {
        largest = left;
    }

    if(right < sizeArr && ht[right] > ht[largest]) 
    {
        largest = right;
    }

    if(largest != i) 
    {
        swap(&ht[i], &ht[largest]);
        heapify(ht, largest);    // Use the swapped index < this largest contains the address for i var
    }
}


void insert(std::vector<int> &ht, int newNum) 
{
    int heapSize = ht.size();
    if(heapSize == 0 )
    {
        ht.push_back(newNum);
    }
    else 
    {
        ht.push_back(newNum);
        for(int i = heapSize / 2 - 1 ; i >= 0 ; i--) 
        {
            heapify(ht, i);
        }
    }
}

void printHeap(std::vector<int> &ht) 
{
    for (int i = 0 ; i < ht.size() ; i ++) 
    {
        std::cout<<ht[i]<< " ";
    }
    std::cout<<"\n";
}

int main () 
{
    std::vector<int> heapTree;

    insert(heapTree, 3);
    insert(heapTree, 4);
    insert(heapTree, 9);
    insert(heapTree, 5);
    insert(heapTree, 2);
    insert(heapTree, 8);

    printHeap(heapTree);
}