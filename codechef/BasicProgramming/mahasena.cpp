#include<iostream>
#include<string>

std::string solve(int n) 
{
    int luckyPerson {0};
    int unluckyPerson {0};
    while(n >  0) 
    {
        int m;
        std::cin>>m;
        if(m % 2== 0) luckyPerson ++;
        else unluckyPerson++;

        n --;
    }
    if(luckyPerson > unluckyPerson) return "READY FOR BATTLE";
    else return "NOT READY";

    
}
int main() 
{
    int n;
    std::cin>>n;
    std::cout<<solve(n)<<std::endl;
    return 0;
}