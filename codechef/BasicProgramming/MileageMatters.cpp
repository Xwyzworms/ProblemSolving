/**
 * https://www.codechef.com/problems/MILEAGE
 */
#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        float n,x,y,a,b;
        std::cin>>n>>x>>y>>a>>b;
        
        float costPetrol = (n / a) * x;
        float costDiesel = (n / b) * y;
        if(costDiesel > costPetrol ) 
        {
            std::cout<<"PETROL\n";
        }
        else if(costPetrol > costDiesel ) 
        {
            std::cout<<"DIESEL\n";
        }
        else 
        {
            std::cout<<"ANY\n";
        }

    }
        return 0; 
}
