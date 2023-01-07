#include<iostream>

int main () 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int a,b,c,d;
        std::cin>>a>>b>>c>>d;
        std::cout<<((a^b^c^d) == 0 ? "YES" : "NO") << "\n";
    }
    return 0; 
}

