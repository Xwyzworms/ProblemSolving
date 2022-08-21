#include <iostream>
#include <sstream>
#include <map>

std::string compress(std::string str)
{
    std::stringstream ss;
    int count=0;


    if(ss.str().length() < str.length()) return str;
}

int main() 
{
    std::string test ="aaccbbdeeeef";
    std::cout<<compress(test)<<std::endl;
    return 0 ;
}