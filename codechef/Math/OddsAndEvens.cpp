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
        if(sum % 2 == 0) std::cout<<"Bob\n";
        else std::cout<<"Alice\n";
    }
    return 0; 
}
