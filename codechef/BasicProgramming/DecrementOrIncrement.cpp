#include<iostream>

int main ()
{
    int t;
    std::cin>>t;
    if(t % 4 ==0) 
    {
        t++;
    }
    else 
    {
        t--;
    }
    std::cout<<t<<std::endl;

    return 0;
}
