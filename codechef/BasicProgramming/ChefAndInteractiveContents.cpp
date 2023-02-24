#include<iostream>

int main() 
{
    int t,R;
    std::cin>>t>>R;
    while(t--) 
    {
        int r;
        std::cin>>r;
        if(r >= R) 
        {
            std::cout<<"Good boi\n";
        }
        else 
        {
            std::cout<<"Bad boi\n";
        }
    }
    return 0;
}
