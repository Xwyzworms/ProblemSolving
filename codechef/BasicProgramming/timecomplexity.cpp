#include<iostream>
#include<string>

std::string solve(int i1, int i2) 
{
    if(i1 > i2) return "yes";
    return "no";
}

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int i1,i2;
        std::cin>>i1>>i2;
        std::cout<<solve(i1,i2)<<std::endl;
        t--;
    }

    return 0;
}