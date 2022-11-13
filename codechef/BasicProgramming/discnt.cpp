#include<iostream>

int solve(int discont) 
{
    return abs(100 -discont);
}

int main() 
{
    int testCase {0};
    std::cin>>testCase;
    while(testCase !=0) 
    {
        int inp1;
        std::cin>>inp1;
        std::cout<<solve(inp1)<<std::endl;

        testCase--;
    }
    return 0;
}