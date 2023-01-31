#include<iostream>



int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        long long int n,k;
        std::cin>>n>>k;
        long long int ans = 1;
        for(int i =1 ; i < k ; i++) 
        {
            /***
             *  The idea here was that
             *  You find the possibility first
             *  n-k+i means you want to find the possibility of certain color, say blue
             * divided by i means that, you only want 1 color possibility thus when having 
             * blue, red , green --> You will divided it by 3 since you only want a red 
             */
            ans = ans * (n-k+i) / i;
        }
        std::cout<<ans<<std::endl;
    }
    return 0;
}
