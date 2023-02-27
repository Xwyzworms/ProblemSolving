#include<iostream>
int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int b;
        std::cin>>b;
        b -=2; 
        b = b / 2;
        std::cout<<b*(b+1) / 2<<std::endl;


    }
    return 0;
}
