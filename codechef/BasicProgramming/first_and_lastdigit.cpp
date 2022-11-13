#include<iostream>

int solve(int n)
{
    int last = n % 10;
    int first {0};
    while(n > 9) 
    {
      n= n / 10;
    }
    first = n;
    return first + last;
}
int main ()  
{
    int testCase;
    std::cin>>testCase;
    while(testCase > 0) 
    {
        int n;
        std::cin>>n;
        std::cout<<solve(n)<<std::endl;
        testCase --;
    }
    return 0;
}