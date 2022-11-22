#include<iostream>

int solve( int start ,int end ) 
{
    int ans {0};
    for(start ; start <= end ;start++) 
    {
        if(start % 10 == 2 || start % 10 == 3 || start % 10 == 9 ) ans++;
    }
    return ans;
}   

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int t1,t2;
        std::cin>>t1>>t2;
        std::cout<<solve(t1,t2)<<std::endl;
        t--;
    }
}