#include<iostream>

int main() 
{
    int tc;
    std::cin>>tc;
    while(tc--)
    {
        int x;
        std::cin>>x;
        if(x > 20) std::cout<<"YES"<<std::endl;
        else std::cout<<"NO"<<std::endl;
    }

    return 0;
}
