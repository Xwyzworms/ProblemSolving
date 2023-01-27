#include<iostream>

int main () 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x;
        std::cin>>x;
        if(x > 65) 
        {
            std::cout<<"Overload\n";
        }
        else if(x < 35) 
        {
            std::cout<<"Underload\n";
        }
        else 
        {
            std::cout<<"Normal\n";
        }
    }
    return 0;
}
