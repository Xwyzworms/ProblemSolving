#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int card = 52;
        int peoplePlay;
        std::cin>>peoplePlay ;
        std::cout<<card % peoplePlay<<std::endl;


    }
    return 0;
}
