#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int x;
        int sum = 0;
        std::cin>>x;
        while(x > 0) 
        {
            int modul = x % 10;
            sum += modul;
            x /= 10;
        }
        std::cout<<sum<<std::endl;
        t--;
    }
    return 0;
}