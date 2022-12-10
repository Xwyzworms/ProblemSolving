#include<iostream>

int main() 
{
    int t;
    std::cin>>t;

    while(t > 0) 
    {
        int n;
        std::cin>>n;
        int sum {0};
        while(n > 0 ) 
        {
            int temp ;
            std::cin>>temp;
            sum+=temp;
            n--;
        }
        if(sum % 2 == 0 ) std::cout<<"NO"<<std::endl;
        else std::cout<<"YES"<<std::endl;
        t--;
    }

    return 0;
}
