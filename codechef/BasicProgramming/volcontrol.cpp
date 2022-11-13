#include<iostream>
#include<math.h>
int solve(int inp1, int inp2) 
{
    return abs(inp1 - inp2);
}
int main() 
{
    int testCase {0};
    std::cin>>testCase;
    while(testCase != 0) 
    {
        int inp1;
        int inp2;
        std::cin>>inp1>>inp2;
        std::cout<<solve(inp1, inp2)<<std::endl;
        testCase --;
    }
    return 0;
}