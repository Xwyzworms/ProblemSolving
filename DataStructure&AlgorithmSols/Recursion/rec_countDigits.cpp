#include<iostream>

int count(int n ) 
{
    if(n == 0 )
    {
        return 0;
    }
    int smallOut = count(n/10);
    return smallOut + 1;
}

int main() 
{
    int digit= 2011;
    std::cout<<count(digit)<<std::endl;
    return 0;
}