#include<iostream>
#include<iomanip>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        float quantity, price;
        std::cin>>quantity>>price;

        if(quantity > 1000) 
        {
            price = price - (price * 10 / 100);
        }
        std::cout<<std::fixed<<std::setprecision(6)<<quantity*price<<std::endl;
        
    }
    return 0;
}
