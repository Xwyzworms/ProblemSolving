#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int a,b,c;
        std::cin>>a>>b>>c;
        if(a > b && a > c) 
        {
            std::cout<<"Alice"<<std::endl;
        }
        else if (b > a && b > c) 
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
