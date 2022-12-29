#include<iostream>
#include<cmath>
int main() 
{
    int t;
    std::cin>>t;
    while(t--)
    {
        int e, k,cnt{0};
        std::cin>>e>>k;
        while(e != 0) 
        {
            e = std::floor(e / k);
            cnt++;
        }
        std::cout<<cnt<<std::endl;
    }   
    return 0;
}
