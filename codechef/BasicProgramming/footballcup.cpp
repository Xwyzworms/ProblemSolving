#include<iostream>
#include<string>

std::string solve(int inp1, int inp2) 
{
    if(inp1 != 0 && inp2 != 0) 
    {
        if(inp1 == inp2 ) return "YES";
        else return "NO";
    }
    else return "NO";
}
int main() 
{
    int testCase{0};
    std::cin>>testCase;
    while (testCase > 0) 
    {
        int inp1, inp2;
        std::cin>>inp1>>inp2;
        std::cout<<solve(inp1,inp2)<<std::endl;
        testCase --;
    }
    return 0;
}