#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n;
        std::cin>>n;
        int a[n];
        for(int i =0 ; i < n; i++) 
        {
            std::cin>>a[i];
        }
        int counter = 0;
        int prev ;
        int next ; 
        for(int i =1; i < n-1 ; i++) 
        {
            next = a[i+1];
            prev = a[i-1];
            if(prev == a[i] && a[i] == next) 
            {
                counter ++;
            }
        }
        if(a[0] == a[1]) counter ++; // For checking the first
        if(a[n-2] == a[n-1]) counter ++; // For checking the last
        
        std::cout<<n-counter<<std::endl;

    }
    return 0;

}
