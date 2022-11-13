#include<iostream>
#include<math.h>


int solve( int a, int b, int c) 
{
    int x = 5  * a;
    int y = 10 * b;
    int xy = x + y;

    return std::ceil(xy / c );
}


int main() 
{
    int testCase {0};
    std::cin>>testCase;
    while(testCase !=0) 
    {
        int inp1, inp2, inp3;
        std::cin>>inp1>>inp2>>inp3;
        std::cout<<solve(inp1,inp2,inp3)<<std::endl;

        testCase--;
    }
    return 0;
}