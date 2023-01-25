#include<iostream>

int main()
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x;
        std::cin>>x;
        if(x % 2 == 0) 
        {
            std::cout<< x/2 << " " << 2 << std::endl;
        }
        else 
        {
            std::cout << "1" << " " << x << std::endl;;;
        }

    }
    return 0;
}
