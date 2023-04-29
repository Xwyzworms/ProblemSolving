#include<iostream>
#include<cmath>
int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x;
        std::cin>>x;
        if(x % 10 != 0) 
        {
            int ans; 
            if(x % 10 < 5) 
                ans = -(x%10);
            else 
                ans = 10 - (x%10);
            std::cout<<100 - (x +  ans )<<std::endl;

        }else {

            std::cout<<100 - x<<std::endl;
        }
    }
    return 0;
}