#include<iostream>

int solve (int a, int b) 
{
    return std::min(a,b);
}

int main()
{
    int t;
    std::cin>>t;
    while(t>0) {

    int a, b;
    std::cin>>a>>b;
    std::cout<<solve(a,b)<<std::endl;
    t--;
    }

    return 0;
}