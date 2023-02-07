#include<iostream>

int main() 
{

    int a,b,c;
    std::cin>>a>>b>>c;
    if(a == b || b == c ||a == c) std::cout<<"YeS\n";
    else std::cout<<"NO\n";
    return 0;
}
