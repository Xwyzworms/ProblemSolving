#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x, a, b;
        std::cin>>x;
        if(x % 2 != 0) 
        {
            a = ((x / 2) + 1) * 3;
            b = (x/2) ;
        }
        else 
        {
            a = (x/2) * 3;
            b = (x/2);
        }

        std::cout<<std::abs(a-b)<<std::endl;
    }
    return 0;
}
