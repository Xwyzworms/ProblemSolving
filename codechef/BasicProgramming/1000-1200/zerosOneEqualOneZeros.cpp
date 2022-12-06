#include<iostream>

int main()
{
    int t;
    std::cin>>t;
    while(t > 0)
    {
        int n;
        std::cin>>n;
        for(int i = 0 ; i < n ; i++) 
        {
            if(i == 0 || i == n - 1) 
            {
                std::cout<<1;
            } 
            else 
            {
                std::cout<<0;
            }
        }
        std::cout<<std::endl;
        t--;
    }
}
