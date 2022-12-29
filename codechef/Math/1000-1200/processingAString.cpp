#include<iostream>
#include<string>
#include<ctype.h>

int main() 
{

    int t;
    std::cin>>t;
    while(t--) 
    {
        std::string x;
        int cnt = 0;
        std::cin>>x;
        for(int i = 0; i<x.length() ; i++) 
        {
            if(std::isdigit(x[i])) 
            {
                cnt+= int(x[i]) - 48 ;
            }
        }
        
        std::cout<<cnt<<std::endl;
    }
    return 0;
}
