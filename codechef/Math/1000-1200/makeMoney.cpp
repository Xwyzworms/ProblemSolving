#include<iostream>

int main () 
{
    int t;
    std::cin>>t;
    while(t--)
    {
        int n,x,c,curSum = 0;
        std::cin>>n>>x>>c;
        // Get the abs :
        int cnts {0};
        int ans {0};
        for(int i =0 ;i <n;i++) 
        {
            int temp;
            std::cin>>temp;
            if(x - temp > c) 
            {
                temp = x;
                cnts++;
            }
            curSum += temp;

        }
        std::cout<<curSum  - cnts*c <<std::endl ;
    }
    
}
