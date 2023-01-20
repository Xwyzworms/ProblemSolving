#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int a,b,x;
        std::cin>>a>>b>>x;
        int diff= b-a; 
        std::cout << diff / x<<std::endl;
    }
}
