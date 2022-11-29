#include<iostream>


int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int x, a, b;
        std::cin>>x>>a>>b;
        int isA = a;
        int isB = b *2;
        
        int sum = isA + isB;
        if(sum >= x) std::cout<<"QUALIFY"<<std::endl;
        else std::cout<<"NOTQUALIFY"<<std::endl;
        t--;
    }
    return 0;
}