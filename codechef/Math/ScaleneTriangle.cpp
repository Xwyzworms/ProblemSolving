#include<iostream>

int main () 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int a,b,c;
        std::cin>>a>>b>>c;
        if(a != b && a != c && b!=c) 
        {
            std::cout<<"yes\n";
        }
        else {

            std::cout<<"no\n";
        }
    }
    return 0;
}
