#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n,k;
        std::cin>>n>>k;
        if(n%4 == 0) 
        {
            std::cout << (k == 0 ? "Off" : "On");
        }
        else 
        {
            std::cout << (k == 0 ? "On" : "Ambiguous");
        }
        std::cout<<std::endl;
        
    }
    return 0;
}
