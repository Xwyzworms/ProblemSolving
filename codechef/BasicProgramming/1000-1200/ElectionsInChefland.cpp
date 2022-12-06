#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0 )
    {
        int a, b, c;
        std::cin>>a>>b>>c;
        if(a > 50) std::cout<<"A"<<std::endl;
        else if(b > 50) std::cout<<"B"<<std::endl;
        else if(c > 50) std::cout<<"C"<<std::endl;
        else std::cout<<"NOTA"<<std::endl;

        t--;
    }
    return 0;
}
