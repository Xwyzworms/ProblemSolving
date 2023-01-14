

#include<iostream>
#include<cmath>

int main () 
{

    int t;
    std::cin>>t;
    while(t--) 
    {
        int n,x;
        std::cin>>n>>x;
        std::cout<<(int(n/x)) * (int(n/x))<<std::endl;
    }
    
    return 0;
}
