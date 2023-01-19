#include<iostream>

int main ()
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        float x1,x2,y1,y2;
        std::cin>>x1>>x2>>y1>>y2;
        
        float divisorA = x1 / y1;
        float divisorB = x2 / y2;
        if(divisorA > divisorB ) 
        {
            std::cout<<"-1"<<std::endl;
        }
        else if(divisorA < divisorB) 
        {
            std::cout<<"1"<<std::endl;
        }
        else {
            std::cout<<"0"<<std::endl;
        }
    }
    return 0;
}
