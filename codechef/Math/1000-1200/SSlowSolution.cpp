#include<iostream>
#include<cmath>
int main() 
{
    int t;
    std::cin>>t;
    while(t --) 
    {
        int tmax, nmax, nmaxSum;
        std::cin>>tmax>>nmax>>nmaxSum;
        int dev = nmaxSum / nmax;
        int sisa = nmaxSum % nmax;
        if(dev < tmax) 
        {
            std::cout<<nmax * nmax * dev + sisa * sisa <<std::endl;
        }
        else
        {
            std::cout<<nmax * nmax * tmax  <<std::endl;

        }
    }
    return 0;
}
