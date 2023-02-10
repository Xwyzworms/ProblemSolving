#include<iostream>

int main() 
{

    int t;
    std::cin>>t;
    while(t--) 
    {
        int x,y,z;
        std::cin>>x>>y>>z;
        int buy = x*y;
        int sell = x*z;
        int profit = sell - buy;

        std::cout<<profit<<std::endl;
    }
            
    return 0;
}

