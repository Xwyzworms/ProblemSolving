#include<iostream>
#include<cmath>
int main () 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n,v1,v2;
        std::cin>>n>>v1>>v2;
        if((n*std::sqrt(2)) /v1 < (n*2.0) / v2) std::cout<<"Stairs\n";
        else std::cout<<"Elevator\n";

    }
    return 0;
}
