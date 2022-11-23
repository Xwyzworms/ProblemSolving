#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int w,x,y,z;
        std::cin>>w>>x>>y>>z;
        int waterFilledHour = y*z;
        int totalWater = w + waterFilledHour;
        if(x == totalWater) 
        {
            std::cout<<"filled"<<std::endl;
        }
        else if(x < totalWater) 
        {
            std::cout<<"Overflow"<<std::endl;
        }
        else {
            std::cout<<"unfilled"<<std::endl;
        }
        t--;
    }
     
    return 0;
}


