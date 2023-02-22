#include<iostream>


void printNums(int n)
{
    if(n == 0) 
    {
        return;
    }
    //Recursive case
    printNums(n-1); // 1 2 3 4 5

    std::cout<<n<< " ";
}


int main() 
{
    printNums(5);
    return 0;
}