#include<iostream>

int countZeros(int n) 
{
    if(n ==0) 
    {
        return 0;
    }
    int recCase = countZeros(n/10);
    
    if(n % 10 == 0) 
    {
        return recCase + 1 ;
    }
    return recCase;
}

int main() 
{
    int digit = 302010120;
    std::cout<<countZeros(digit)<<std::endl;
    return 0;
}