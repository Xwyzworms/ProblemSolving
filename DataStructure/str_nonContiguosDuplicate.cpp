#include <iostream>
#include <string.h>

// ababab, abxxxx , x means removed
// hellow, helxow , x means removed

// Do this without additional buffer, only have 1
// Continued lated



void removeDuplicatesAnother(char str[]) 
{
    if(str == NULL) return;
    bool buffer[256] = {false};
    size_t size = sizeof(str) / sizeof(str[0]);
    char answer[4];
    std::cout<<size<<std::endl;
     
}

int main() 
{
    char str[] = "";
    removeDuplicatesAnother(str);
    return 0;
}