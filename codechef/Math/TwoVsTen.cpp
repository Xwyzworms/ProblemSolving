#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x;
        std::cin>>x;
        if(x % 5 == 0)  
        {
            if(x % 10 == 0)  
            {
                std::cout<<"0\n";
            }
            else 
            {
                std::cout<<"1\n";
            }
        }
        else {
            std::cout<<"-1\n";
        }
    }
    return 0;
}
