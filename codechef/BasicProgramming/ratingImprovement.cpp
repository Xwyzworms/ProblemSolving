#include<iostream>
#include<string>

std::string solve(int inp1, int inp2) 
{

    int inp3 = inp1 + 200;

    if(inp1 <= inp2 && inp2 <= inp3) return "YES";

    else return "NO";
}
int main() 
{
    int testCase {0};
    std::cin>>testCase;
    while(testCase !=0) 
    {
        int inp1, inp2;
        std::cin>>inp1>>inp2;
        std::cout<<solve(inp1,inp2)<<std::endl;

        testCase--;
    }
    return 0;
}