#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x,y,k;
        std::cin>>x>>y>>k;
        int diff = std::abs(x-y); 
        if( (diff % k) != 0 && diff != 0) 
        {
            std::cout<< (diff / k) + 1<<std::endl;
        }
        else 
        {
            std::cout<< (diff / k)<<std::endl;
        }
    }
    return 0;
}
