#include<iostream>


int main() 
{
    int i1,i2;
    int count{0};
    std::cin>>i1>>i2;

    while(i1 > 0) 
    {
        int inp;
        std::cin>>inp;
        if(inp % i2 == 0) count ++;
        i1 --;
    }
    std::cout<<count<<std::endl;
    return 0;
}