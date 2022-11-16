#include<iostream>

int solve(int xx) 
{
    if(xx % 25 == 0) 
    {
        return xx / 25;
    }
    return (xx / 25) + 1;
}

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int xx;
        std::cin>>xx;
        std::cout<<solve(xx)<<std::endl;
        t--;
    }

}