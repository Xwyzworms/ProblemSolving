#include<iostream>
#include<vector>
int main() 
{
    int t;
    std::cin>>t;

    while(t--) 
    {
        int x, sum=0;
        std::cin>>x;
        int ar1[x];
        int ar2[x];

        for(int i = 0; i<x;i++) 
        {
            std::cin>>ar1[i]>>ar2[i];
        }

        for(int i = 0; i < 9; i++) 
        {
            int max = 0;
            for(int j = 0; j < x; j++) 
            {
                if(i == ar1[j] && ar2[j] > max) 
                {
                    max = ar2[j];
                }
            }
            sum += max;
        }

        std::cout<<sum<<std::endl;
            
    }
    return 0;
}
