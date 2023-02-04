#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x;
        std::cin>>x;
        int ans = x % 3;
        if(ans == 0) std::cout<<"normal\n";
        else if(ans == 1) std::cout<<"huge\n";
        else if (ans == 2) std::cout<<"small\n";
    }
    return 0;
}
