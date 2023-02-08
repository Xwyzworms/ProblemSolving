#include<iostream>
//https://www.codechef.com/problems/HDIVISR
int main() 
{
    int inp, ans =0 ;
    std::cin>>inp;
    for(int i =1;i<=10;i++)
    {
        if(inp % i == 0) 
        {
            if(ans < i) 
            {
                ans =i;
            }
        } 
    }
    std::cout<<ans<<std::endl;
}
