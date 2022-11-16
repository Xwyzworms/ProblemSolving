#include<iostream>
#include<cmath>

int solve(int p1, int p2) 
{
    int ans{0};
    if(p1 > p2) 
    {
        int as = abs(p1 - p2);
        if( as % 2 == 0) 
        {
            if(as < 4) return 1;
            else {
                int temp {0};
                if(as % 4 != 0) temp = 1; 
                as = std::ceil(as / 4);
                as += temp;

            }    
        }
        else if(as % 2 != 0) 
        {

            as = std::ceil(as / 4);
            as ++;
        }
        return as;
    }
    return 0;
}

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int p1, p2;
        std::cin>>p1>>p2;
        std::cout<<solve(p1, p2)<<std::endl;
        t--;
    }
    return 0;
}