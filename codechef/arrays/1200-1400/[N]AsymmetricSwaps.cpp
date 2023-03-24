#include<iostream>
#include<climits>
#include<cmath>
int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n;
        std::cin>>n;

        int a[n];
        int b[n];
        int ans[n];
        
        int min{INT_MAX};
        int max {0};

        for(int i =0 ; i < n ; i++) 
        {
            std::cin>>a[i];
        }

        for(int i =0 ; i < n ; i++) 
        {
            std::cin>>b[i];
            if(b[i] < min) 
            {
                min = b[i];
            }
        }

        for(int i =0 ;i < n ; i ++) 
        {
            for(int j = 0 ; j < n ; j++) 
            {
                if(a[i] > b[j] && b[j] <= min) 
                {
                    ans[i] =b[j];
                }
                else
                {
                    ans[i] = a[i];
                }
                
            }
        }

        for(int  i =0 ; i<n ; i++) 
        {
            if(ans[i] >= max) 
            {
                max = ans[i];
            }
        }

        std::cout<<max - min <<std::endl;

        }
} 
