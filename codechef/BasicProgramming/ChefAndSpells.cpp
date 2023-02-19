#include<iostream>
int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int a,b,c;
        std::cin>>a>>b>>c;
        int sum = a+b+c;
        int minValue = std::min(a,std::min(b,c));
        std::cout<<sum - minValue<<std::endl;
    }
    return 0;
}
