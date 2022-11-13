#include<iostream>
#include<string>
std::string solve(int a, int b, int c) 
{
    int total = a + b + c;
    if( ( a >= 10 && b>= 10 && c >= 10 ) && total >= 100) return "PASS";
    return "FAIL";
}

int main() 
{

    int testCase {0};
    std::cin>>testCase;
    while(testCase > 0) 
    {
        int a, b, c;
        std::cin>>a>>b>>c;
        std::cout<<solve(a, b, c)<<std::endl;
        testCase -- ;
    }   
    return 0;    
}