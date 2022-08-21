#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>

bool solve(std::string str1, std::string str2) 
{
 
    if(str1.length() != str2.length()) return false;
  
    std::sort(str1.begin(), str1.end());
    std::sort(str2.begin(), str2.end());
    
    std::cout<<str1<<std::endl;
    std::cout<<str2<<std::endl;

    for(size_t i = 0 ; i < str1.length() ; i++ ) 
    {
        if(str1[i] != str2[i]) return false;
    }

    return true;
}

int main() 
{

    std::string hello  = "hello";
    std::string olleh = "olleh";

    std::string wrong ="wrong";
    std::string fuf = "fuf";

    std::cout<<solve(hello, olleh)<<std::endl;
    std::cout<<solve(wrong, fuf)<<std::endl;
    return 0;

}
