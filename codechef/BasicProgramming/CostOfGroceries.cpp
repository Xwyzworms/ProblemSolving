#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n,x;
        std::cin>>n>>x;
        int total = 0;
        int a[n];
        int b[n];
        for(int i =0 ; i< n;i++) 
        {
            std::cin>>a[i];
        }
        for(int i = 0; i<n;i++) std::cin>>b[i];
        
        for(int i = 0 ; i<n;i++) 
        {
            if(a[i] >=x) 
            {
                total += b[i];
            }
        }
        std::cout<<total<<std::endl;

    }           
    return 0;
}
