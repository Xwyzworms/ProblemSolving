#include<iostream>

int main() 
{
    char t;
    std::cin>>t;
    if(t == 'A' || t == 'I' || t== 'U' || t == 'E' || t == 'O') {
        std::cout<<"Vowel\n";
    } 
    else 
    {
        std::cout<<"Consonant\n";       
    }
    return 0;
}
