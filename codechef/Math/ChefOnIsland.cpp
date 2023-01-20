#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x,y,xr,yr,D;
        std::cin>>x>>y>>xr>>yr>>D;
        int totalNeedWater = D*yr;
        int totalNeedFood = D*xr;
        if ( y / totalNeedWater > 0 &&  x / totalNeedFood > 0) 
        {
            std::cout<<"YES\n";
        }
        else std::cout<<"NO\n";
        

    }
    return 0;
}
