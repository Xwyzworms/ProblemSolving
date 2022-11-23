#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int n;
        int sum {1};
        std::cin>>n;
        while(n > 0) 
        {
            sum = sum* n;
            n--;
        }
        std::cout<<sum<<std::endl;
        t--;
    }
    return 0;
}