#include<iostream>

int main() {

    
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n;
        std::cin>>n;
        if(n % 3 == 0 )
        {
            std::cout<<"YES\n";
        }
        else 
        {
            std::cout<<"NO\n";
        }
    }
    return 0;
}
