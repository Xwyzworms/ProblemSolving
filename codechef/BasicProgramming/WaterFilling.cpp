#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
       int b1,b2,b3;
       int cnt = 0;
       std::cin>>b1>>b2>>b3;
        if(b1 > 0 && b2 > 0 || b1 > 0 && b3 > 0 || b2 > 0 && b3 > 0) 
        {
            std::cout<<"Not now\n";
        }
        else 
        {
            std::cout<<"Water filling time\n";
        }
    }
    return 0;
}