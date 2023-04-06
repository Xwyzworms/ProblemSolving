#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x,y;
        std::cin>>x>>y;   
        int diff = x - y;
        for(int  i =1 ; i <= diff ; i++) 
        {
            y+=i;
            if(y >= x) 
            {
                std::cout<<i<<std::endl;
                break;
            }
        }
    }
    return 0;
}