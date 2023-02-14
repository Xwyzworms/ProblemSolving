#include<iostream>

int main()
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int p,m,v;
        std::cin>>p>>m>>v;
        int newM = m - (p-1);
        std::cout<<newM * v <<std::endl;
    
    }
    return 0;
}
