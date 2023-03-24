#include<iostream>
#include<climits>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n;
        std::cin>>n;
        int ar[n];
        int min {INT_MAX};
        int count{0};
        for(int i =0 ; i < n ; i++) 
        {
            std::cin>>ar[i];
            if(ar[i] <=min) 
            {
                min = ar[i];
            }

        }

        for(int i =0 ; i < n ; i++) 
        {
            if(ar[i] == min ) count++;
        }

        std::cout<<n-count<<std::endl;
    }
    return 0;
}
