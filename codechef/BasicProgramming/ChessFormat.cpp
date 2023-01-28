#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int a,b;
        std::cin>>a>>b;
        int sum = a+b;
        if(sum < 3) std::cout<<"1\n";
        else if(sum >= 3 && sum <= 10) std::cout<<"2\n";
        else if(sum >= 11 && sum <= 60) std::cout<<"3\n";
        else std::cout<<"4\n";
    }
}
