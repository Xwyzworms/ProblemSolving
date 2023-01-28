#include<iostream>

int main() 
{
    char a,b;
    std::cin>>a>>b;
    if(a == 'R' && b =='B') std::cout<<"R\n";
    else if(a =='R' && b == 'G') std::cout<<"R\n";
    else if( b == 'B' && a =='G') std::cout<<"B\n";
    else if(b == 'B' && a == 'B') std::cout<<"B\n";
    else if(a == 'R' && b == 'R')std::cout<<"R\n";
    else std::cout<<"G\n";
    return 0;
}
