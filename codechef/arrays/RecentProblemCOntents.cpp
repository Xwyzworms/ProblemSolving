#include<iostream>
#include<string>
int main () 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x;
        std::cin>>x;
        int cntsL {0};
        int cntsS {0};
        for(int i = 0; i<x;i++) 
        {
            std::string str ;
            std::cin>>str;
            if(str == "LTIME108") cntsL ++;
            else cntsS++;
        }
        std::cout<<cntsS<< " " << cntsL<<std::endl;
    }

    return 0;
}
