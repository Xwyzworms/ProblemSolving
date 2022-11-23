#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while( t > 0 ) 
    {
        int x,y,z;
        std::cin>>x>>y>>z;
        int correct = y * 3;
        int rest = x - y;
        if(correct - rest >= z ) std::cout<<"pass"<<std::endl;
        else std::cout<<"fail"<<std::endl;
        t--;
    }
    return 0 ;

}