#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--)
    {
        int n,cnts = 0, max=0;
        std::cin>>n;
        int a[n];
        int b[n];
        for(int i =0 ; i < n; i++) 
        {
            std::cin>>a[i];
        }

        for(int i=0 ; i< n;i++)
        {
            std::cin>>b[i];
        }

        for(int i=0;i<n;i++)
        {
            if(a[i] != 0 &&  b[i] != 0)
            {
                cnts++;
                
                if(max < cnts) 
                {
                    max = cnts;
                }
            }
            else 
            {
                cnts = 0;
            }
        }

        std::cout<<max<<std::endl;
        
    }
    return 0; 
}
