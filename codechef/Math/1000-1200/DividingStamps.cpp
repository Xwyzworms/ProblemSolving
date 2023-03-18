#include<iostream>
#include<cmath>
int main() 
{
    long long int t;
    std::cin>>t;
    long long int sum=0;
    int temp;
    for(int i =0 ; i< t ; i++) 
    {
        std::cin>>temp;
        sum += temp;
    }
    if( ((t*(t+1))/ 2) == sum) 
    {
        std::cout<<"YES\n";
    }
    else 
    {
        std::cout<<"NO\n";
    }
    return 0;
}
