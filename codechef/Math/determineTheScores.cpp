#include<iostream>

int solve(int basePoint, int totalCorrect) 
{
    return (basePoint / 10) * totalCorrect;
}
int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int basePoint, temp;
        std::cin>>basePoint>>temp;
        std::cout<<solve(basePoint,temp)<<std::endl;
        t--;
    }
    return 0;
}