#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int d,x,y,z;
        std::cin>>d>>x>>y>>z;
        int firstWay = 7 * x;
        int dayLeft = 7 - d;
        int grindDay = d * y;

        int secondWay = grindDay + (dayLeft * z);
        std::cout<<std::max(firstWay, secondWay)<<std::endl;
        t--;
    }

    return 0;
}