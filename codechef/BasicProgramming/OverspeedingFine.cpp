#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {

        int x; 
        std::cin>>x;
        if(x <= 70) std::cout<<0<<std::endl;
        else if(x >70 && x <= 100) std::cout<<500<<std::endl;
        else std::cout<<2000<<std::endl;
    }
    return 0;
}
