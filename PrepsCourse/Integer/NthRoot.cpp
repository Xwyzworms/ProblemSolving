#include<iostream>
#include <cmath>
float solve(float x, float root)  
{
    return pow(x, 1 / root);    
}
int main () 
{
    int testcase1x = 27;
    int testcase1root = 3;

    int testcase2x = 7;
    int testcase2root = 3;

    std::cout<<solve(testcase1x, testcase1root)<<std::endl;
    std::cout<<solve(testcase2x,testcase2root)<<std::endl;
    return 0;
}
