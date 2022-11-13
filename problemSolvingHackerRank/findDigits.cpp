#include<iostream>
#include<algorithm>



int solve(int n) 
{
    int ans {0};
    int current_remainder {0};
    int num = n;
    while(n != 0) 
    {
        current_remainder = n % 10;
        if(current_remainder != 0)
            if(num % current_remainder == 0) ans++;
        n = n / 10;
    }
    return ans;
}
int main() 
{
    int n = 123456789;
    std::cout<<solve(n)<<std::endl;
    return 0;
}