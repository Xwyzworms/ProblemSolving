#include<iostream>

int main() 
{

    int t;
    std::cin>>t;
    while(t--) 
    {
        
        int a,b,a1,b1,a2,b2 ;
        std::cin>>a>>b>>a1>>b1>>a2>>b2;
        if( (a == a1 || a == b1) && (b == a1 || b == b1))
        {
            std::cout<<1<<std::endl;
        }
        else if ((a == a2 || a == b2) && (b == a2 || b == b2))
        {
            std::cout<<2<<std::endl;
        }
        else 
        {
            std::cout<<0<<std::endl;
        }
        

    }
    return 0;
}
