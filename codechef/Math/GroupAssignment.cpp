#include<iostream>

int main ()
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        long long n,x;
        std::cin>>n>>x;
        int total_student = 2*n;
        std::cout<<total_student-(x-1)<<std::endl;
        
    }
    return 0;
}
