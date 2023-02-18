#include<iostream>

int main() 
{

    int t;
    std::cin>>t;
    while(t--) 
    {
        int n=5;
        int cnts_1 = 0;
        for(int i =0; i< n ; i++) 
        {
            int temp;
            std::cin>>temp;
            if(temp == 1) cnts_1++;
        }

        if(cnts_1 == 0) 
        {
            std::cout<<"Beginner\n";
        }
        else if(cnts_1 == 1) 
        {

            std::cout<<"Junior Developer\n";

        }
        else if(cnts_1 == 2) 
        {
            
            std::cout<<"Middle Developer\n";
        }

        else if(cnts_1 == 3) 
        {
            std::cout<<"Senior Developer\n";
        }
        else if (cnts_1 == 4) 
        {
            std::cout<<"Hacker\n";
        }
        else 
        {
            std::cout<<"Jeff Dean\n";
        }
    }

    return 0;
}
