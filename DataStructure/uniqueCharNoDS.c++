#include <iostream>
#include <string.h>

// assume char set is ASCII
bool isUniqueChars(std::string str) 
{
    bool char_set[256] = {false}; // default all false
    for (int i=0; i < str.size(); i++) 
    {
        int val = str[i];
        if(char_set[val] ) return false;
        char_set[val] = true ;
    }

    return true;
}

int main () 
{
    std::string hello = "helo";
    std::string hello2 = "hello";
    std::cout<<isUniqueChars(hello)<<std::endl;
    std::cout<<isUniqueChars(hello2)<<std::endl;
    return 0;
}