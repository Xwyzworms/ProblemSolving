#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int a,b,c,d,sum=0 ,cnt=0;
        std::cin>>a>>b>>c>>d;
        
        if(a + b + c <= d) std::cout<<"1\n";
        else if( (a+b) <= d || (a + c) <= d || (b+c) <= d) std::cout<<"2\n";
        else std::cout<<"3\n";

    }
    return 0;
}
