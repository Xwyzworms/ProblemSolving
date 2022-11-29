#include<iostream>

int main() 
{
    int t; 
    std::cin>>t;
    while(t > 0) {
        int x, y;
        std::cin>>x>>y;
        if(y % x  == 0) 
        {
            if(x - y <= 0) std::cout<<"YES"<<std::endl;
            else std::cout<<"No"<<std::endl;   
        }
        else {
            std::cout<<"NO"<<std::endl;
        }
        t--;
    }
    
    return 0;
}