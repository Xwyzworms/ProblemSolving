#include<iostream>


int factorial(int n ) 
{
    if (n == 0) 
    {
        return 1; 
    }
    else 
    {
        return n * factorial(n-1);
    }
}

int main() 
{
    int inp = 4;
    std::cout<<factorial(4)<<std::endl;
    return 0;

}