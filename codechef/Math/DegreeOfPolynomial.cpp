#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n, cnts=0;
        std::cin>>n;
        for(int i =0 ; i< n ;i++) 
        {
            int inp ; 
            std::cin>>inp;
            if(inp != 0) 
            {
                cnts = i;
            }
        }
        std::cout<<cnts<<std::endl;
    }
    return 0;
}

