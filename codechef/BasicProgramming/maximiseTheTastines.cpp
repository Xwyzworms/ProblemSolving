#include<iostream>

int solve(int p1, int p2, int p3, int p4)
{
    int a,b;
    if(p1 > p2) 
    {
     a=p1;   
    }
    else {
        a = p2;
    }

    if(p3 > p4) 
    {
        b = p3;
    }
    else {
        b= p4;
    }

    return a + b;
}

int main() 
{
    int t; 
    std::cin>>t;
    while(t > 0) 
    {
        int p1,p2,p3,p4;
        std::cin>>p1>>p2>>p3>>p4;
        std::cout<<solve(p1,p2,p3,p4)<<std::endl;
        t--;
    }
    return 0;
}