/*
 *https://www.codechef.com/problems/REDSTRBTN?tab=statement
 * */
#include<iostream>
int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x,y,z;
        std::cin>>x>>y>>z;
        int sum = x+y+z ;
        if(sum > 5) 
        {

            if( sum % 3 == 0 || sum % 3 == 1 || sum % 3 == 2 || sum % 3 == 3 ) 
            {
                std::cout<<"Yes\n";
            }
            else 
            {
                std::cout<<"No\n";
            }
        }
        else 
        {
            std::cout<<"No\n";
        }
    }
    return 0;
}
