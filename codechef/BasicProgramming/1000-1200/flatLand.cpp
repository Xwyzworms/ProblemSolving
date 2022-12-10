#include<bits/stdc++.h>
int main() 
{
    std::cin.tie(NULL);
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n;
        std::cin>>n;
        int sqrtN = std::sqrt(n);
        int powSqrt = std::pow(sqrtN, 2);
        if(n == powSqrt) std::cout<<1<<std::endl;
        else 
        {
            int cnt {1};
            int diff = std::abs(n - powSqrt);
            while(diff != 0) 
            {
                int sqrtDiff = std::sqrt(diff);
                diff = diff -  std::pow(sqrtDiff, 2);
                cnt++;
            }
            std::cout<<cnt<<std::endl;
        }
    }
    return 0;
}
