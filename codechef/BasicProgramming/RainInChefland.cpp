#include<iostream>


int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x;
        std::cin>>x;
        if (x < 3) 
        {
            std::cout<<"LIGHT\n";
        }
        else if (x >= 3 && x < 7) 
        {
            std::cout<<"MODERATE\n";
        }
        else 
        {
            std::cout<<"HEAVY\n";
        }
    }
    return 0;
}
