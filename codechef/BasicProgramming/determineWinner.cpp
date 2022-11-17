#include<iostream>
#include<string>

std::string solve(int p1, int p2, int p3, int p4) 
{
    bool maxP1 = p1 >= p2;
    bool maxP3 = p3 >= p4;
    if(maxP1 && maxP3) 
    {
        if(p1 < p3) return "P";
        else if(p1 > p3) return "Q";
        else return "TIE";
    }   
    else if(maxP1 && !maxP3) 
    {
        if(p1 > p4) return "Q";
        else if(p4 > p1) return "P";
        return "TIE";
    }
    else if(!maxP1 && maxP3) 
    {
        if(p3 > p2 )return "P";
        else if(p2 > p3) return "Q";
        else return "TIE";
    }
    else 
    {
        if(p2 > p4) return "Q";
        else if(p4 > p2) return "P";
        else return "TIE";   
    }
}

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) {
        int p1,p2,p3,p4;
        std::cin>>p1>>p2>>p3>>p4;
        std::cout<<solve(p1,p2,p3,p4)<<std::endl;
        t--;
    }
    return 0;
}