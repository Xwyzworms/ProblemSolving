#include<iostream>

int solve(int x, int y, int z) 
{
    int levels {3};
    int ans {0};    
    while(x != 0)
    {
        if(levels == 0) 
        {
            levels = 3;
            ans += z;
        }
        ans += y;
        levels --;
        x--;
    }
    return ans;
}   

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {   

        int p1, p2, p3;
        std::cin>>p1>>p2>>p3;
        std::cout<<solve(p1,p2,p3)<<std::endl;
        t--;
    
    }
    return  0;
}