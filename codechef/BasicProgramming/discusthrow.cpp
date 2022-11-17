#include<iostream>

int solve(int p1, int p2, int p3) 
{
    if(p1 >= p2 && p1 >= p3) return p1;
    else if(p2 >= p1 && p2 >=p3) return p2;
    else return p3;   
}
int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int x,y,z;
        std::cin>>x>>y>>z;
        std::cout<<solve(x,y,z)<<std::endl;
        t--;
    }
    return 0;
}