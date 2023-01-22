#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int a,b;
        std::cin>>a>>b;
        int sum = (a + b)/2;
        int diff1 = std::abs(sum - a);
        int diff2 = std::abs(sum - b);
        if(diff1 == diff2)
        {
            std::cout<<sum<<std::endl;
        }
        else 
        {
            std::cout<< -1<<std::endl;
        }
    }
    return 0;
}
