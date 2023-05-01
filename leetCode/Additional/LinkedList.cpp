#include<iostream>
struct Node {

    int data;
    Node* next;
    Node(int dat) : data(dat), next(NULL){}
};

void printNode(Node* node) 
{
    Node* temp = node;
    while(temp!= NULL) 
    {
        std::cout<<(*temp).data<<" ";
        temp = temp->next;
    }
}
int main() 
{
    Node n1 = Node(5);
    Node n2 = Node(3);
    Node *n3 = new Node(8);

    n1.next = &n2;
    n2.next = n3;
    printNode(&n1);

    return 0;
}