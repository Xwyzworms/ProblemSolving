#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int g1,s1,b1,g2,s2,b2;
        std::cin>>g1>>s1>>b1>>g2>>s2>>b2;
        int sumC1 = g1 + s1 + b1;
        int sumC2 = g2 + s2 + b2;

        if(sumC1 > sumC2) 
        {
            std::cout<<1<<std::endl;
        }
        else {

            std::cout<<2<<std::endl;
        }
    }       
    return 0;
}
