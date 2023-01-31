#include<iostream>

int main() 
{
        int n,h,x;
        std::cin>>n>>h>>x;
        for(int i =0 ; i < n;i++ )
        {
            int ts;
            std::cin>>ts;

            int sum= ts + x ;
            if(sum == h) 
            {
                std::cout<<"Yes\n";
                return 0;
            }
        }
        std::cout<<"No\n";
    return 0;
}
