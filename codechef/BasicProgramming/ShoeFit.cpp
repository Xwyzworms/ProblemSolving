#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
     int a,b,c,sum=0;
     std::cin>>a>>b>>c;
     sum = a+b+c;
     if(sum >0 && sum < 3) 
     {
         std::cout<<"1\n";
     }
     else 
     {
         std::cout<<"0\n";
     }
    

    }
    return 0;
}
