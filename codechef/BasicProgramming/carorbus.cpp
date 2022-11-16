#include<iostream>
#include<string>

std::string solve(int p1, int p2) 
{
    if(p1 > p2) return "CAR";
    else if( p1 < p2 ) return "BIKE";
    return "SAME";    
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