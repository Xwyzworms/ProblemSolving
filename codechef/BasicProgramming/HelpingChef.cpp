#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n;
        std::cin>>n;
        if(n < 10) 
        {
            std::cout<<"Thanks for helping Chef!\n";
        } 
        else 
        {
            std::cout<<"-1\n";
        }
    }
    return 0;
}
