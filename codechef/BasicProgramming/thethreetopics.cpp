#include<iostream>
#include<string>
std::string solve(int p1, int p2, int p3, int p4) 
{
    if(p1 == p4) return "YES";
    else if(p2 == p4 ) return "YES";
    else if(p3 == p4) return "YES";
    else return "NO";
}

int main() 
{
    int p1,p2,p3,p4;
    std::cin>>p1>>p2>>p3>>p4;
    std::cout<<solve(p1,p2,p3,p4)<<std::endl;
}