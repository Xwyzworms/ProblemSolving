#include<iostream>
#include<iomanip>
int main() 
{
    double a,b;
    char c;
    std::cin>> a>>b;
    std::cin>>c;
    
    if(c == '+') std::cout<<std::fixed<<a + b <<std::endl;
    else if(c == '-') std::cout<<std::fixed<< a - b <<std::endl;
    else if(c == '*') std::cout<<std::fixed<<a * b <<std::endl;
    else std::cout<<std::fixed<<a / b <<std::endl;
    
    return 0;
}
