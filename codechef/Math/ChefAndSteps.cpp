#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n,k;
        std::cin>>n>>k;
        int temp;
        int a[n];
        for(int i =0 ; i < n ; i++) 
        {
            std::cin>>temp;
            if(temp % k == 0 ) 
            {
                a[i]= 1;
            }      
            else 
            {
                a[i] = 0;
            }
        }

        for(int i = 0; i < n ; i ++) 
        {
            std::cout<<a[i];
        }
        std::cout<<std::endl;

    }   
    return 0;
}
