#include<iostream>

int main () 
{
    int t;
    
    std::cin>>t;
    while(t > 0) 
    {
        int point_a = 500;
        int point_b = 1000;
        int a,b;
        std::cin>>a>>b;
        int totalA = point_a - a * 2;
        int totalB = point_b - (a + b) * 4;

        int totalA2 = point_a - (a + b) * 2;
        int totalB2 = point_b - b * 4;
        std::cout<<std::max(totalA + totalB, totalA2 + totalB2)<<std::endl;
        t--;
    }

    return 0;
}