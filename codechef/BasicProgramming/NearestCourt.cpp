#include<iostream>
/*
 * https://www.codechef.com/problems/NEARESTCOURT*
 */
int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x,y;
        std::cin>>x>>y;
        int distance = std::abs(x-y);
        if(distance % 2 == 0) 
        {
            std::cout<<distance/2<<std::endl;
        }
        else 
        {
            std::cout<<(distance/2 )+ 1<<std::endl;
        }
    }   
    return 0;
}
