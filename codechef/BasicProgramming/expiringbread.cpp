#include<iostream>
#include<string>

std::string solve(int a, int b, int c) 
{
        int totalDays = b*c;
        if(a <= totalDays) return "Yes";

    return "No";
} 
int main() 
{
    int testCase {0};
    std::cin>>testCase;
    while(testCase > 0) 
    {
        int a, b, c;
        std::cin>>a>>b>>c;
        std::cout<<solve(a,b,c)<<std::endl;
        testCase --;
    }
    return 0;

}