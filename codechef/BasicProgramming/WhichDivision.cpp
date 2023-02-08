#include<iostream>
//https://www.codechef.com/problems/WHICHDIV
int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int inp;
        std::cin>>inp;
        if(inp >= 2000) std::cout<<"1\n";
        else if(inp >= 1600 && inp < 2000) std::cout<<"2\n";
        else std::cout<<"3\n";
    }
    return 0;
}
