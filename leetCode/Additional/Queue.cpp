#include<iostream>
struct Node 
{
    int data;
    Node* next;
    Node(int val) : data(val), next(NULL){}
};
class QueueLinkedList 
{
    private :
        Node* head;
        Node* tail;
        Node* traverse;
        int total;
    public : 
        int front();
        int tail();
        void enqueue(int val);
        int dequeue( );
        int size();
        bool isEmpty();

        int front() 
        {
            return head->data;
        }

        int size() 
        {
            return total;
        }


        int tail() 
        {
            return tail->data;
        }

        bool isEmpty() 
        {
            return head == NULL;
        }
        
        void enqueue(int val) 
        {
            while(traverse != NULL) 
            {
                traverse = traverse->next;
            }
            traverse = new Node(val);
            tail = traverse;
            total ++;
        }

        int dequeue() 
        {
            int data =  head->data;
            total --;
            if(total == 0) 
            {
                head = head->next;
            }
            else 
            {
                head = NULL;
            }
            return data;

        }



};

class Queue 
{
    private : 
        int *arr;
        int capacity;
        int indexArr;
        int head;
        int tail;

    public :
        Queue(int capacity, int val) 
        {
            capacity = capacity;
            arr = new int[capacity];
            indexArr = 0;
            arr[indexArr] = val;
            indexArr++;
        }
        int front();
        int tail();
        void enqueue(int val);
        int dequeue( );
        int size();
        bool isEmpty();


        int front() 
        {
            return head;
        }

        int tail() 
        {
            return tail;
        }

        void enqueue(int val) 
        {   
            arr[indexArr] = val;
            tail = arr[indexArr];
            indexArr++;
        }

        int dequeue() 
        {
            int data = arr[indexArr - 1];
        }

        int size() 
        {
            return indexArr - 1;
        }

        bool isEmpty() 
        {
            return indexArr > 0;
        }

};


int main() 
{
    return 0;
}