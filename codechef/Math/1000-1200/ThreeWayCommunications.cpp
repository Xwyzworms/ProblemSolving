#include<iostream>

int main () 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int r,x1,y1,
            x2,y2,
            x3,y3;
        std::cin>>r;
        std::cin>>x1>>y1;
        std::cin>>x2>>y2;
        std::cin>>x3>>y3;
        
        int absChef12 = std::abs(x1+x2 - x2+y2);
        int absChef13 = std::abs(x1+y1 - x3+y3);

        int absChef23 = std::abs(x2+y2 - x3+y3);
        if(absChef12 != 0 && absChef23 != 0 && absChef13 != 0) 
        {
            std::cout<<"no\n";
        }
        else 
        {
            std::cout<<"yes\n";
        }
        


    }
    return 0 ;
}
