#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int totalCoconut;
        int xa,xb,xxa,xxb;
        std::cin>>xa>>xb>>xxa>>xxb;
        totalCoconut = xxa / xa + xxb / xb;
        std::cout<<totalCoconut<<std::endl;
    }
    return 0; 
}
