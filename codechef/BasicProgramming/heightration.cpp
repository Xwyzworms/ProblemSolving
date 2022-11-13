#include<iostream>


int solve(int inp1, int inp2) 
{
    if(inp1 > inp2) return inp1;
    else return inp2;
}
int main ()
{

    int inp1, inp2;
    std::cin>>inp1>>inp2;
    std::cout<<solve(inp1, inp2)<<std::endl;
    return 0;
 }