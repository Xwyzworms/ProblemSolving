#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n,m,ans=0;
        std::cin>>n>>m;
        /**
         * Using Min or max doesnot problem.  because the value of area
         * will not exceed right ? 
         */
        for(int i = 1; i < std::min(n,m)+1;i++) 
        {   
            if(n % i == 0 && m % i == 0)  ans=i;
        }
        std::cout<<int((n*m) / (ans * ans))<<std::endl;
    }
    return 0;
}
