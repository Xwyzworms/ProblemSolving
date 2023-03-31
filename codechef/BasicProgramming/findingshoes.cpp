#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n,m;
        std::cin>>n>>m;
        if(n >= m) 
        {
            int totalShoes = n * 2;
            int totalCurrent = m*2;
            std::cout<<m + (totalShoes  - totalCurrent)<<std::endl;
        }
        else 
        {
            std::cout<<n<<std::endl;
        }
    }
    return 0;
}
