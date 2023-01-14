#include<iostream>

int main ()
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int a,b,c , i = 1 , cnts = 0;
        std::cin>>a>>b>>c;
        while(true) 
        {
            if(a % i != 0 && b % i != 0 && c % i != 0) 
            {
                cnts = i;
                break;
            }
            i++;
        }

        std::cout<<cnts<<std::endl;
    } 

    return 0;
}
