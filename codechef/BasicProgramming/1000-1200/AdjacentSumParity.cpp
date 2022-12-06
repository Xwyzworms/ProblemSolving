#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int n,sum{0};
        std::cin>>n;
        while(n > 0) 
        {
            int temp;
            std::cin>>temp;
            sum+=temp;
            n--;
        }
        if(sum % 2 == 0) std::cout<<"YES"<<std::endl;
        else std::cout<<"NO"<<std::endl;
        t--;
    }

    return 0;
}
