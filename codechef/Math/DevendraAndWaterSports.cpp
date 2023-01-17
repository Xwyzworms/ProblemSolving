#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int z,y,a,b,c;
        std::cin>>z>>y>>a>>b>>c;
        z -= y;
        if(z-a-b-c >=0) std::cout<<"Yes\n";
        else std::cout<<"NO\n";
        
    }
    return 0;

}
