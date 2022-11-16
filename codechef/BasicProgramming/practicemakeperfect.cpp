#include<iostream>
int solve(int p1, int p2, int p3, int p4) 
{
    int ans {0};
    if(p1 >=10) ans ++;
    if(p2 >= 10) ans ++;
    if(p3 >= 10) ans ++;
    if(p4 >= 10) ans ++;
    return ans;
    
}
int main() 
{
    int p1,p2,p3,p4;
    std::cin>>p1>>p2>>p3>>p4;
    std::cout<<solve(p1,p2,p3,p4)<<std::endl;
    return 0;
}