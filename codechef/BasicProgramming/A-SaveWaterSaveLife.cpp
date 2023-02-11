#include<iostream>
//https://www.codechef.com/problems/SAVWATER?tab=statement 
int main ()
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int h,x,y,c;
        std::cin>>h>>x>>y>>c;
        int grey = y/2;
        int usageGrey = (grey + x)*h;
        if(usageGrey <= c)
        {
            std::cout<<"Yes\n";
        }
        else 
        {
            std::cout<<"No\n";
        }
    }
    return 0;
}
