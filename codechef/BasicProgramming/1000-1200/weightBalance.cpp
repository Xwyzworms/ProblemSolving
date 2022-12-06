#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int w1,w2,x1,x2,m, maxWeightInc, minWeightInc,diff;
        std::cin>>w1>>w2>>x1>>x2>>m;
        diff = std::abs(w1 - w2);
        maxWeightInc = m * x2;
        minWeightInc = m * x1;
        if(diff>=minWeightInc && diff <= maxWeightInc) std::cout<<1<<std::endl;
        else std::cout<<0<<std::endl;
        t--;
    }
    return 0;
}
