#include<iostream>

int solve(int x) 
{
    return x * 2;

}


int main() 
{
    int testCase ;
    std::cin>>testCase;
    while(testCase > 0) 
    {
        int a;
        std::cin>>a;
        std::cout<<solve(a)<<std::endl;
        testCase --;
    }
    return 0;
}