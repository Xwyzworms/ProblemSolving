#include<iostream>
// https://www.codechef.com/problems/NONNEGPROD?tab=statement
int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n;
        std::cin>>n;
        int cntsMinus = 0;
        int flagZero = 0;
        for(int i =0 ; i < n ; i++) 
        {
            int temp;
            std::cin>>temp;
            if(temp == 0) 
            {
                flagZero =1;
            }
            
            if(temp < 0) 
            {
                cntsMinus++;
            }

        }
        if(cntsMinus % 2 == 0 || flagZero != 0)  
        {
            std::cout<<0<<std::endl;
        }
        else 
        {
            std::cout<<cntsMinus%2<<std::endl;
        }
    }
    return 0;
}
