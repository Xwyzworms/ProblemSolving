#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int a,b,c,d;
        std::cin>>a>>b>>c>>d;
        int discountedA = a - c;
        int discountedB = b -  d ;
        if(discountedA < discountedB ) std::cout<<"First\n";
        else if (discountedB < discountedA) std::cout<<"Second\n";
        else std::cout<<"Any\n";
    }
    return 0;
}
