#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int r1,w1,c1;
        int r2,w2,c2;
        int a{0},b{0};
        std::cin>>r1>>w1>>c1;
        std::cin>>r2>>w2>>c2;
        
        if(r1 > r2) a++;
        else b++;

        if(w1>w2) a++;
        else b++;

        if(c1>c2) a++;
        else b++;

        if(a>b) 
        {
            std::cout<<"A\n";
        }
        else
        {
            std::cout<<"B\n";
        }
    }
    return 0;
}
