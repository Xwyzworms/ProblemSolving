#include<iostream>
#include<vector>
#include<string>
std::string solve(int inp1, int inp2) 
{   

    if(inp1 < inp2) return "FIRST";
    else if(inp2 < inp1) return "SECOND";
    else return "ANY";

}
int main() 
{
    int testCase {0};
    std::cin>>testCase;
    while(testCase != 0)
    {
        int inp1,inp2;
        std::cin>>inp1>>inp2;
        std::cout<<solve(inp1, inp2)<<std::endl;
        testCase --;
    }
    return 0;
}