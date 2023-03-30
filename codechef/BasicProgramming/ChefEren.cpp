#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n, a, b;
        std::cin>>n>>a>>b;
        int sum = 0;
        for (int i = 1 ; i  <= n ; i++) 
        {
            if( i % 2 == 0 ) 
            {
              sum += a;
            }
            else 
            {
             sum += b;
            }
        }
        std::cout<<sum<<std::endl;
            
    }
    return 0; 
}
