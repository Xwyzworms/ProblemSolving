#include<iostream>

int main () 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int n;
        std::cin>>n;
        int cns = 0;
        int ps = n;
        int i = 0;
        while( n > 0 )
        {
            if( ps % n == 0) cns++;
            n--;
        }
        if(cns == 2) std::cout<<"yes"<<std::endl;
        else std::cout<<"no"<<std::endl;
        t--;
    }
    return 0;
}