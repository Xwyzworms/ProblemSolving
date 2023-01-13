#include<iostream>
#include<cmath>
int main() 
{

    int t;
    std::cin>>t;
    while(t--) 
    {
        int n,x;
        std::cin>>n>>x;
        
        int chefMoney = std::pow(2,x);
        for(int i =1; i<= n;i++) 
        {

                chefMoney =  chefMoney - (chefMoney * 50) / 100;
        }

        std::cout<<chefMoney<<std::endl;

    }
    return 0;
}
