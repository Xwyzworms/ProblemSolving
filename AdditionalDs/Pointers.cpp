#include<iostream>

int main () 
{
    int x = 27;
    int *ip ;
    ip = &x;

    std::cout<<ip<<std::endl; // Address to 
    std::cout<<*ip<<std::endl;
    std::cout<<&ip<<std::endl;
    return 0;
}