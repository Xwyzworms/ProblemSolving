#include<iostream>

int main() 
{

    int t;
    std::cin>>t;
    while(t--) 
    {
        int x, maxR{0}, indxR=0, maxL{0}, indxL{0};

        std::cin>>x;
        int a[x], b[x];

        for(int i=0; i<x;i++) 
        {
            std::cin>>a[i];
            if(maxR < a[i]) 
            {
                maxR = a[i];
                indxR = i;
            }
        }

        for(int i =0 ; i < x; i++)
        {
            std::cin>>b[i];
            if(maxL < a[i]) 
            {
                maxL = b[i];
                indxL = i;
            }
        }

        if(indxL == indxR) std::cout<<indxL<<std::endl;
        else {
            std::cout<<indxR<<std::endl;
        }
    }

    return 0;
}
