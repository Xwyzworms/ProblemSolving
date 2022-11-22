#include<iostream>

int solve( int km) 
{
    int mul = km * 2 * 5;
    return mul;
}
int main() 
{   
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int tempBg;
        std::cin>>tempBg;
        std::cout<<solve(tempBg)<<std::endl;
        t--;
    }
    return 0;
}