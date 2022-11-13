#include<iostream>


int solve(int x, int y) 
{
    return x % y;
}


int main() 
{
    int testCase {0};
    std::cin>>testCase;
    while(testCase > 0) 
    {
        int inp1, inp2;
        std::cin>>inp1>>inp2;
        std::cout<<solve(inp1, inp2)<<std::endl;
        testCase --;
    }

    return 0;
}