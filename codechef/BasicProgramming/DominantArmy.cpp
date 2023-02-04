#include<iostream>

int main () 
{
    int t;
    std::cin>>t;

    while(t--) 
    {
        int na,nb,nc;
        std::cin>>na>>nb>>nc;
        if(na > nb + nc || nb > na + nc || nc > nb + na) std::cout<<"Yes\n";
        else std::cout<<"No\n";
    }
    return 0;

}
