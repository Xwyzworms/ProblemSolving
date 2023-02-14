#include<iostream>
#include<cmath>
int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x,a,b,c, min1=0,min2=0;
 
        std::cin>>x>>a>>b>>c;
        min1 = std::min(std::min(a,b),c);
        if(min1 == a )
        {
            min2 = std::min(b,c);
        } 
        else if(min1 == b)
        {
            min2 = std::min(a,c);
        }
        else if(min1 == c) 
        {
            min2 = std::min(a,b);
        }
        std::cout<<(x-1)*min1 + min2<<std::endl;
    }
}
