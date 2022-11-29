
#include<iostream>
int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int x;
        std::cin>>x;
        int module = x % 4;
        if(module >= 2) std::cout<<"Yes"<<std::endl;
        else std::cout<<"NO"<<std::endl;

        t--;
    }
    return 0; 
}
