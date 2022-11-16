#include<iostream>
#include<string>

std::string solve(float n1, float n2) 
{

    if(n2 / n1 >= 0.5) return "Yes";
    return "No";
}

int main() 
{
    int t;
    std::cin>>t;
    while(t> 0) 
    {
        float n1, n2;
        std::cin>>n1>>n2;
        std::cout<<solve(n1,n2)<<std::endl;
        t--;
    }
}