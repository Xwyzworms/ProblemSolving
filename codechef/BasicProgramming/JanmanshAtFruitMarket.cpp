#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x,a,b,c;
        std::cin>>x>>a>>b>>c;
        int min1 = 0,min2 = 0;
        if(a<=b && a<=c) 
        {
            min1 = a;
            if(b<c) 
            {
                min2 = b;
            }
            else if(c < b) 
            {
                min2 = c;
            }
            else if( c== b) 
            {
                min2 = b;
            }
        }
        else if(b <= a && b <= c) 
        {
            min1 = b;
            if(a<c) 
            {
                min2 = a;
            }
            else if(c < a) 
            {
                min2 = c;
            }
            else if( a== c) 
            {
                min2 = c;
            }
        }
        else if(c<=a && c <=b) 
        {
            min1 = c;
            if(b<a) 
            {
                min2 = b;
            }
            else if(a < b) 
            {
                min2 = a;
            }
            else if( a== b) 
            {
                min2 = a;
            }
        }
        std::cout<<(x-1)*min1 + min2<<std::endl;

    }
    return 0;
}
