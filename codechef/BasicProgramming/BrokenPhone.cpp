#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x,y;
        std::cin>>x>>y;
        if(x < y) std::cout<<"Repair\n";
        else if(y < x ) std::cout<<"New Phone\n";
        else std::cout<<"Any\n";
    }
    return 0;
}
