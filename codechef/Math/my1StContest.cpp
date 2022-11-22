#include<iostream>

void solve(int x , int a, int b) 
{
    std::cout<<x - a<< " " << x - a - b <<std::endl;
}
int main() 
{
       int x,y,z;
        std::cin>>x>>y>>z;  
        solve(x,y,z);
    
    return 0;
}