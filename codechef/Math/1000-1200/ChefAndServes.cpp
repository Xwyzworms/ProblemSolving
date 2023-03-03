#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int k,p1,p2;
        std::cin>>k>>p1>>p2;
        int sum = p1 + p2;
        if(sum % k == 0) 
        {
            std::cout<<"CHEF\n";
        }
        else 
        {
            std::cout<<"COOK\n";
        }
    }
    return 0;
}
