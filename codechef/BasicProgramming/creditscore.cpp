#include<iostream>
#include<string>

std::string solve(int x) 
{   
    if (x >= 750) return "YES";
    return "NO";

}


int main () 
{
    int inp;
    std::cin>>inp;
    std::cout<<solve(inp)<<std::endl;
    return 0;
}