#include<iostream>
#include<vector>



int solve(int n) 
{
    int ans {0};
    for(int i = 0; i <= n; i++) 
    {
        if(i % 2 != 0) 
        {
            ans *= 2;
        }
        else 
        {
            ans++;
        }
    }

    return ans;
}
   
int main() 
{

    std::cout<<solve(5)<<std::endl;
    return 0;
}