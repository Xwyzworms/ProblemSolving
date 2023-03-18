#include<iostream>

int main() 
{
    //This is my solution, Codechef solution probably WEIRD
    long long int t;
    std::cin>>t;
    long long int current = 0;
    while(t--) 
    {

        long long int n;
        std::cin>>n;
        if(current >= 0) 
        {
            current = current  -n;
        }
        else 
        {
            current = current + n;
        }

        std::cout<<current<<std::endl;
    } 
    return 0;
}
