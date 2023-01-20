#include<iostream>
int main( )
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x,y,p,q;
        std::cin>>x>>y>>p>>q;
        
        int penaltyX = x + (p*10);
        int penaltyY = y + (q*10);
        if(penaltyY > penaltyX ) 
        {
            std::cout<<"Chef\n";
        }
        else if(penaltyY < penaltyX) 
        {

            std::cout<<"Chefina\n";
        }
        else  
        {
            std::cout<<"Draw\n";
        }
    }
    return 0;
}
