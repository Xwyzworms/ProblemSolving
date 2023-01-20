#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x;
        std::cin>>x;
        if(x % 4 == 1) 
        {
            std::cout<<"East\n";
        }
        else if(x % 4 ==2) 
        {
            std::cout<<"South\n";
        }
        else if(x % 4 == 3) 
        {
            std::cout<<"West\n";
        }
        else 
        {
            std::cout<<"North\n";
        }
    }
    return 0;
}
