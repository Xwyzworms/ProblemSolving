#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--)  
    {
        int sa,sb,sc;
        std::cin>>sa>>sb>>sc;
        if(std::min(std::min(sa,sb),sc) == sb) 
        {
            std::cout<<"Bob\n";
        }
        else if(std::min(std::min(sa,sb),sc) == sc)
        {
            std::cout<<"Alice\n";
        } 
        else 
        {
            std::cout<<"Draw\n";
        }
        
    }
}
