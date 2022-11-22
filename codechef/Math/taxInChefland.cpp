#include<iostream>

int solve(int temp) 
{
    if(temp > 100) return temp -10;
    return temp;
}
int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int temp;
        std::cin>>temp;
        std::cout<<solve(temp)<<std::endl;
        t--;
    }
    return 0;
}