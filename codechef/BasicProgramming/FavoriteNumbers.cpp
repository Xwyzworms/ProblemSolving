#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int a;
        std::cin>>a;
        if(a % 2 == 0 && a % 7 == 0) 
        {
            std::cout<<"Alice\n";
        }
        else if(a % 2 != 0 && a % 9 == 0) 
        {
            std::cout<<"Bob\n";
        }
        else 
        {
            std::cout<<"Charlie\n";
        }
    }
    return 0;
}