#include<iostream>
#include<cmath>
int solve(int as) {
    if(as % 5 == 0 || as % 10 == 0 ) 
    {
        int modulo = as % 10;
        int divisor = as / 10;
        if(modulo != 0) return ++divisor;
       return divisor;
    }
    return -1;
}

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int tl;
        std::cin>>tl;
        std::cout<<solve(tl)<<std::endl;
        t--;
    }
}
