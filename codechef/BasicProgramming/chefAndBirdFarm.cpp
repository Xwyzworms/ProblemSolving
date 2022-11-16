#include<iostream>
#include<string>


std::string solve(int a, int b , int c) 
{
    bool chiken {false};
    bool duck {false};
    if(c % a == 0) chiken = true;
    if(c % b == 0) duck = true;

    if(chiken && duck) 
    {
        return "ANY";
    }
    else if(chiken && !duck) 
    {
        return "CHICKEN";
    }
    else if(duck && !chiken) 
    {
        return "DUCK";
    }
    return "NONE";
     
}

int main() 
{
    int t;
    std::cin>>t;
    while(t >0)
    {
        int a, b,c ;
        std::cin>>a>>b>>c;
        std::cout<<solve(a,b,c)<<std::endl;
        t--;
    }
    return 0;
}