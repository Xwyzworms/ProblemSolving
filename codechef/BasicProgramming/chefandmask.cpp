#include<iostream>
#include<string>

std::string solve(int a, int b) 
{
    int dis = a * 100;
    int clo = b * 10;
    if(dis < clo) return "DISPOSABLE";
    else if(dis > clo) return "CLOTH";
    else return "CLOTH";
}

int main() 
{
    int testCase {0};
    std::cin>>testCase;
    while(testCase > 0)  
    {

        int a, b;
        std::cin>>a>>b;
        std::cout<<solve(a,b)<<std::endl;
        testCase --;
    }
    return 0;
}