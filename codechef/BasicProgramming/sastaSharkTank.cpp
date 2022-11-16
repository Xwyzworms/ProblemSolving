#include<iostream>
#include<string>

std::string solve(int p1, int p2)
{
    int valuationP1 = 100 * p1 / 10;
    int valuationP2 = 100 * p2 / 20;
    if(valuationP1 == valuationP2) return "ANY";
    else if(valuationP1 > valuationP2) return "FIRST";
    return "SECOND";
} 

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int p1,p2;
        std::cin>>p1>>p2;
        std::cout<<solve(p1,p2)<<std::endl;
        t--;
    }
    return  0;
}