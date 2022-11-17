#include<iostream>

int solve(int p1, int p2) 
{
    return abs(p1 - p2);
}


int main() 
{
    int t;
    std::cin>>t;
    while(t >0) 
    {
        int p1,p2;
        std::cin>>p1>>p2;
        std::cout<<solve(p1,p2)<<std::endl;
        t--;
    }
    return 0;
}