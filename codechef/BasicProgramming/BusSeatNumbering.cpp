#include<iostream>

int main () 
{
    int t;
    std::cin>>t;
    while(t--)  
    {
        int x;
        std::cin>>x;
        if( ( x % 2 == 1 && x <= 10) || (x % 2 == 0 && x <= 10)) 
        {
            std::cout<<"Lower Double\n";
        }
        else if(x > 10 && x <= 15) 
        {
            std::cout<<"Lower Single\n";
        }
        else if( ( x%2 == 1 || x % 2== 0 ) &&  (x >= 16 && x <= 25)) 
        {
            std::cout<<"Upper Double\n";       
        }
        else 
        {
            std::cout<<"Upper Single\n";
        }

    }
    return 0;
}