#include<iostream>
#include<string>

std::string solve(int p1, int p2, int p3, int p4 ) 
{   
    int sum = 0;
    sum = p1 + p2 + p3 + p4;
    if(sum == 0 ) return "in";
    else return "OUT";

}


int main() 
{
    int t;
    std::cin>>t;
    while(t>0) 
    {
        int p1, p2, p3, p4;
        std::cin>>p1>>p2>>p3>>p4;
        std::cout<<solve(p1,p2,p3,p4)<<std::endl;
        t--;
    }
    return 0;
}