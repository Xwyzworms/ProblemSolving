#include<iostream>

int main() 
{
    int t; 
    std::cin>> t; 
    while(t > 0 )
    {
        int a,b;
        std::cin>>a>>b;
        int cursum {1};
        while(true) 
        {   
            a -= cursum;
            if(a < 0) 
            {
                std::cout<<"BOB"<<std::endl;
                break;

            }            cursum ++;
            b -= cursum;
            if(b < 0)
            {
                std::cout<<"LIMAK"<<std::endl;
                break;

            }             cursum++;
        }
        t--;
    }
    return 0;
}
