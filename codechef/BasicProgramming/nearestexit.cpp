#include<iostream>
#include<string>

std::string solve(int n) 
{
    if(n >= 51 )return "RIGHT";
    return "LEFT";
}


int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int ans ;
        std::cin>>ans;
        std::cout<<solve(ans)<<std::endl;
        t--;
    }
    return 0;
}