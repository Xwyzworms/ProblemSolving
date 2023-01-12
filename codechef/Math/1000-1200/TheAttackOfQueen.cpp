#include<iostream>
#include<cmath>
int main () 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n,x,y;
        std::cin>>n>>x>>y;
        int hor_ver = 2*(n - 1);
        int left_diagonal = std::min(x-1, y-1) + std::min(n-x,n-y);
        int right_diagonal = std::min(x-1, n-y) + std::min(y-1, n-x);
        std::cout<<hor_ver + left_diagonal + right_diagonal<<std::endl;
    }
    return 0;
}   
