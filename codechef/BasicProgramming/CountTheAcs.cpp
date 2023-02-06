#include<iostream>

int main()
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int p;
        std::cin>>p;
        int solved = 0;
        int solvedPoint100 = p / 100;
        solved = solved  + solvedPoint100;
        int solvedPoint1 = (p - (100*solvedPoint100));
        solved+=solvedPoint1;
        
        if( solved > 10) 
        {
            std::cout<<"-1\n";
        }
        else 
        {
            std::cout<<solved<<std::endl;;
        }
    }
    return 0;
}

