#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int a,b;
        std::cin>>a>>b;
        if(100 - ( 100 * a / 100) < 200 - (200 * b/ 100) )
        {
            std::cout<<"FIRST\n";
        }
        else if (100 - ( 100 * a / 100) > 200 - (200 * b/ 100)) 
        {
            std::cout<<"SECOND\n";
        }
        else 
        {

            std::cout<<"BOTH\n";
        }
    }
    return 0;
}
