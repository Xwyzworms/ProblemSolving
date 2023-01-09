#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n,m;
        std::cin>>n>>m;
        
        int totalRows = (n % 2 ==0 ) ? n/2 : (n/2)+1;
        int totalSeats = (m % 2 ==0) ? m / 2 : (m/2) +1;
        std::cout<< totalSeats*totalRows<<std::endl;
        
    }
    return 0;   
}
