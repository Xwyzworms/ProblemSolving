#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x;
        std::cin>>x;
        std::cout<<((x-30 >= 0 ? "yes" : "no"))<<std::endl;
    }
    return 0;

}
