#include<iostream>

int main () 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int n,k,x,y;
        std::cin>>n>>k>>x>>y;
        int min1 = ((n-k) * x) + (k * x);
        int min2 = ((n-k) * y) + (k * x);
        if(min1 >=min2) std::cout<<min2<<std::endl;
        else std::cout<<min1<<std::endl;
        t--;
    }
    return 0;

}