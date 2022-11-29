#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int n,x;
        std::cin>>n>>x;
        int sumOfN {0};
        int whatMiss = n*x; 
        while(n - 1 > 0) 
        {
            int temp ;
            std::cin>>temp;
            sumOfN += temp;
            n--;
        }
        int miss = whatMiss - sumOfN;


        if(miss <= 0) std::cout<<0<<std::endl;
        else std::cout<<miss<<std::endl;

        t--;
    }
    return 0;
}
