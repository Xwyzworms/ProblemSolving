#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x;
        std::cin>>x;
        if(x == 2010 || x == 2015 || x == 2016 || x == 2017 || x == 2019) 
        {
            std::cout<<"HOSTED\n";
        }
        else 
        {
            std::cout<<"NOT HOSTED\n";
        }
    }
    return 0;
}
