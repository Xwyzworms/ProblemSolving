#include<iostream>

struct Node
{
    int data;
    Node* next;
    Node(int data) : data(data), next(nullptr) {}

};


class StackLinkedList {

    private:
        Node* root;
    public:
        StackLinkedList() 
        {
            if(root == NULL) 
            {
                root = new Node(0);
            }
        }   

        StackLinkedList(int value) 
        {
            if(root == NULL) 
            {
                root = new Node(value);
            }
            else 
            {
                root->next = new Node(value);
            }
        } 

        void push(int val);  
        void pop();
        int size();
        bool isEmpty();

        bool isEmpty() 
        {
            return root == NULL;
        }
        void push(int val) 
        {
            if(!isEmpty()) 
            {
                while(root != NULL) 
                {
                    root = root->next;
                }
                root = new Node(val);
                
            }
        }

        int size() 
        {
            if(!isEmpty()) 
            {
                int size = 0;
                Node* temp = root;
                while(temp != NULL) 
                {
                    temp = temp->next;
                    size += 1;
                }
                return size;
            }
            return -1;
        }

        void pop()
        {
            // Todo later
        }


};
class Stack {
    private :
        int *arr;
        int nextIndex;
        int capacity;
    public:
        Stack() 
        {
            arr = new int[100];
            nextIndex = 0;
        }
        Stack(int capacity) 
        {
            this->capacity = capacity;
            this->nextIndex = 0;
            arr = new int[capacity];

        }
        void push(int val);
        int pop();
        int top();
        int size();
        bool isEmpty();


        void push(int val) 
        {
            if(nextIndex == capacity) 
            {
                std::cout<<"Stack is Full\n";
                return;
            }
            arr[nextIndex] = val;
            nextIndex ++;
        }

        int top() 
        {
            if(!isEmpty()) 
            {
                return arr[nextIndex - 1];
            }
            return -1;
        }

        int size() 
        {
            return nextIndex;
        }

        bool isEmpty() 
        {
            return nextIndex == 0;
        }

        int pop() 
        {
            if(!isEmpty()) 
            {
                nextIndex--;
                delete &arr[nextIndex];
                return arr[nextIndex];
            }
            return -1;
        }

};

int main() 
{

}