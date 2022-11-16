#include<iostream>
#include<string>

std::string solve(int p1, int p2, int p3) 
{
    if(p2 >= p1 && p2 >= p3) return "yes";
    return "no";
}

int main() 
{
    int t;
    std::cin>>t;
    while(t >0) 
    {
        int a, b, c;
        std::cin>>a>>b>>c;
        std::cout<<solve(a,b,c)<<std::endl;
        t--;
    }
    return 0;
}