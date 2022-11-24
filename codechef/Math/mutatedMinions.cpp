#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int cnt {0};
        int n,k;
        std::cin>>n>>k;
        while( n > 0 ) 
        {

            int temp;
            std::cin>>temp;
            if((temp + k) % 7 == 0) cnt++;
            n--;
        }
        std::cout<<cnt<<std::endl;
        t--;
    }
    return 0;
}