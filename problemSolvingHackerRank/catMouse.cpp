#include<iostream>
#include<algorithm>
#include<string>


std::string solve(int x, int y , int z)
{
    if(abs(x-z) == abs(y-z) ) return "Mouse C";
    else if(abs(x-z) > abs(y-z)) return "Cat B";
    else return "Cat A";

}


int main ()  
{
    std::cout<<solve(47,29,89)<<std::endl;
    return 0;   
}   