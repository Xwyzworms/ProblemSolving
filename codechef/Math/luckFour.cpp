#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0 )  
    {
        int n ;
        std::cin>>n;
        int couns {0};
        while(n > 0 )
        {
            int modulo = n % 10;
            if(modulo == 4) couns ++;
            n /= 10;
        }
        std::cout<<couns<<std::endl;
        t--;
    }
    return 0;
}