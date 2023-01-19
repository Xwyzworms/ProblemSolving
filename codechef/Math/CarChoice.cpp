#include<iostream>

int main ()
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x1,x2,y1,y2;
        std::cin>>x1>>x2>>y1>>y2;
        
        int divisorA = y1 / x1;
        int divisorB = y2 / x2;
        if(divisorA > divisorB ) 
        {
            std::cout<<"-1"<<std::endl;
        }
        else if(divisorA < divisorB) 
        {
            std::cout<<"1"<<std::endl;
        }
        else {
            std::cout<<"0\n";
        }
    }
    return 0;
}
