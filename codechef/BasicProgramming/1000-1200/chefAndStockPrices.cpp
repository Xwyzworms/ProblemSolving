
#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        double s,a,b,c, stockAfter;
        std::cin>>s>>a>>b>>c;
        stockAfter = s + (s * c / 100.0 );
        if(stockAfter >=a && stockAfter <=b) std::cout<<"Yes"<<std::endl;
        else std::cout<<"No"<<std::endl;
            
    }
    return 0; 
}
