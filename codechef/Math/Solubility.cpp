#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--)
    {
        int x,a,b;
        std::cin>>x>>a>>b;
        int to100Deg = 100 - x;
        int additionalSugar = b * to100Deg;
        int sugarPerMlin100Deg = a + additionalSugar;
        std::cout<<sugarPerMlin100Deg * 10 <<std::endl;

    }

    return 0;
}
