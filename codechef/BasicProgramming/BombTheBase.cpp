#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n,x;
        std::cin>>n>>x;
        bool printed = false;
        int a[n];
        // Loopp Invariant
        // a[i+1..n] != null
        for(int i =0 ; i< n ;i++) 
        {
            std::cin>>a[i];
        }
        int i =n;
        // Loop Invariant 
        // a[i+1..n] >= x 
        for( i= n-1; i > -1;i--)
        {
            if(a[i] < x)
            {
                std::cout<<i+1<<std::endl;
                printed = true;
                break;
            }
        }
        if(!printed) 
        {
            std::cout<<i+1<<std::endl;
        }


    }
    return 0;
}
