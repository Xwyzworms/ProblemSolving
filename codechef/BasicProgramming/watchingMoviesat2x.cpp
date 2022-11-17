#include<iostream>
#include<string>
#include<cmath>
int solve(int p1 ,int p2) 
{
    double div = std::ceil(24 / 2);
    int watching = p1 - p2;
    return div + watching;

}
int main() 
{
    int p1,p2;
    std::cin>>p1>>p2;
    std::cout<<solve(p1,p2)<<std::endl;
}