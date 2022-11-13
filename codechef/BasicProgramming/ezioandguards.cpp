#include<string>
#include<iostream>

std::string solve(int a, int b) 
{

    if(a >= b) return "YES";
    return "NO";
}

int main () 
{
    int testCase {0};
    std::cin>>testCase;
    while(testCase > 0) 
    {
        int a,b;
        std::cin>>a>>b;
        std::cout<<solve(a, b)<<std::endl;
        testCase --;
    }
    return 0;
}