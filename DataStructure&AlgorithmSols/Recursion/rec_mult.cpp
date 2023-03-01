#include<iostream>

int mult(int m, int x)
{
    if(x == 1) 
    {
        return m;
    }
    
    int recursiveCase = mult(m, x-1);
    return recursiveCase + m;
}

int main() 
{
    int m = 3;
    int x = 4;
    std::cout<<mult(3,4)<<std::endl;    

    return 0;
}