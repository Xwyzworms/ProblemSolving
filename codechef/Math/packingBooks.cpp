#include<iostream>
#include<cmath>
int main () 
{
    int t;
    std::cin>>t;
    while(t > 0 ) 
    {
        int x,y,z;
        std::cin>>x>>y>>z;
        int absd = (y / z);
        if(y % z != 0) absd++;
        std::cout<<x*absd<<std::endl;
        t--;
    }
    return 0;
}