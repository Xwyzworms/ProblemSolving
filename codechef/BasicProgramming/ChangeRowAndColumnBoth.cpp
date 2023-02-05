#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int sx,sy,ex,ey;
        std::cin>>sx>>sy>>ex>>ey;
        if(sx != ex && sy != ey) std::cout<<"1\n";
        else std::cout<<"2\n";
    }
    return 0;
}
