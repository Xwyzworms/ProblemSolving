#include<iostream>


int fib(int n)
{
    if(n == 0 ) 
    {
        return 0;
    }

    //Recursive case
    int smallOutput1 = fib(n-1);
    int smallOutput2 = fib(n-2);

    return smallOutput1 + smallOutput2;
}
int main() 
{
    std::cout<<fib(4)<<std::endl;
    return 0;
}