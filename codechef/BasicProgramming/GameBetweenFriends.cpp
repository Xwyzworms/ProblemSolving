#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int a,b,c,d;
        std::cin>>a>>b>>c>>d;

        if(a >= b) 
        {
            b+= c;
            
            if(b >= a) 
            {
                a+= d;
            }
            else 
            {
                b+=d;
            }
        }
        else 
        {
          a+= c;
          if(a >= b) 
          {
              b+=d;
          }
          else 
          {
              a+=d;
          }
        }
    if(a >= b) 
    {
        std::cout<<"N\n";
    } 
    else 
    {
        std::cout<<"S\n";
    }

    }
    return 0;
}
