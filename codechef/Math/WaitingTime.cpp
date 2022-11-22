#include<iostream>


int main () 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int x1,x2;
        std::cin>>x1>>x2;
        int days = x1 * 7;
        std::cout<<days - x2<<std::endl;
        t--;
    }
    return 0;
}