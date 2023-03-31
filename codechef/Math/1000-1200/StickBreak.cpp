#include<iostream>

int main() {

    int t;
    std::cin>>t;
    while(t--) 
    {
        long long int k,l;
        std::cin>>k>>l;
        if(k%l == 0) 
        {
            std::cout<<"0\n";
        }
        else 
        {
            std::cout<<"1\n";
        }
    }
    return 0;
}
