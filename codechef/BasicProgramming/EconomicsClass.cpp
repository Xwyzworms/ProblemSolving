#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n;
        std::cin>>n;
        int s[n],d[n];
        int cnts=0;
        
        for(int i =0 ;i < n ;i ++ ) 
        {
            std::cin>>s[i];
        }
        
        for(int i =0 ;i < n ;i ++ ) 
        {
            std::cin>>d[i];
            if(s[i] == d[i]) 
            {
                cnts++;
            }
        }

        std::cout<<cnts<<std::endl;

    }

    return 0;
}
