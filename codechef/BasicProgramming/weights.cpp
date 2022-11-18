#include<iostream>
#include<string>

std::string solve(int w, int x, int y, int z) 
{
    // only positive
    if( x + y + z == w) return "yes";
    else if(x + y == w || x + z == w || y + z == w ) return "yes";
    else if(y == w || x == w| z == w) return "yes";
    return "no";
}
int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int p1,p2,p3,p4;
        std::cin>>p1>>p2>>p3>>p4;
        std::cout<<solve(p1,p2,p3,p4)<<std::endl;
        t--;
    }   
    return 0;
}

