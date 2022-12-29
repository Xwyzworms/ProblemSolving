#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n,a,b,c;
        std::cin>>n>>a>>b>>c;

        int sumA = a+c;
        if(sumA <= b) 
        {
            if( sumA < n) std::cout<<"NO\n";
            else std::cout<<"YES\n";
        }
        else 
        {
            if(b < n) std::cout<<"NO\n";
            else std::cout<<"YES"<<std::endl;
        }
    }
    return 0;
}
