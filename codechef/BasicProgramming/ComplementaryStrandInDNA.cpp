#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int s;
        std::cin>>s;
        for(int i = 0; i< s;i++) 
        {
            char f;
            std::cin>>f;
            if(f == 'A')
            {
                std::cout<<'T';
            }
            else if(f == 'T') 
            {
                std::cout<<'A';
            }
            else if(f == 'C') std::cout<<'G';
            else std::cout<<'C';
        }
        std::cout<<std::endl;
    }
    return 0;
}
