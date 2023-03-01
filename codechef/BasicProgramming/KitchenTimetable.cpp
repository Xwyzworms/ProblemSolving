#include<iostream>

int main()
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n;
        std::cin>>n;
        int a[n], b[n];
        int count = 0 ;
        for(int i =0 ;  i < n ;i ++) 
        {
            std::cin>>a[i];
        }

        for(int i =0 ; i < n ; i++) 
        {
            std::cin>>b[i];
        }
        
        for(int i = 0 ; i < n; i++) 
        {
            if(i == 0 && b[i] <= a[i]) 
            {
                count++;
            }
            else 
            {

                int diff =  a[i] - a[i-1] ;
                if(b[i] <= diff) 
                {
                    count++;
                }
            }

        }
        std::cout<<count<<std::endl;        
    }
    return 0;
}
