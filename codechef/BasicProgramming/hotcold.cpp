#include<iostream>
#include<string>

std::string solve(int n1) 
{
    if(n1 > 20) return "HOT";
    else return "COLD";
}

int main () 
{
    int testCase {0};
    std::cin >>testCase;
    while(testCase > 0) 
    {
        int sjs ;
        std::cin>>sjs;
        std::cout<<solve(sjs)<<std::endl;
        testCase --; 
    }
    return 0;
}