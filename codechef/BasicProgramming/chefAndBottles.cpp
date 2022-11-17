#include<iostream>

int solve(int emptyBottles, int bottleCapacity, int totalWater) 
{
    if(bottleCapacity > totalWater) return 0;
    else {
        int totalMax = totalWater / bottleCapacity;
        if(emptyBottles > totalMax) return totalMax;
        else return emptyBottles;
    }
}

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int p1,p2,p3;
        std::cin>>p1>>p2>>p3;
        std::cout<<solve(p1,p2,p3)<<std::endl;
        t--;
    }
    return 0;
}
