#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x1,x2,x3,v1,v2;
        std::cin>>x1>>x2>>x3>>v1>>v2;
        
        float diffChef = std::abs(x3-x1);
        float diffKefa = std::abs(x3-x2);
  
        if(diffChef / v1 < diffKefa/v2) 
        {
            std::cout<<"Chef\n";
        }
        else if(diffKefa / v2 < diffChef/v1) 
        {
            std::cout<<"Kefa\n";
        }
        else 
        {
            std::cout<<"Draw\n";
        }

    }
    return 0;
}
