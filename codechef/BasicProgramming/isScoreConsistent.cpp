#include<iostream>
#include<string>
std::string solve(int a, int b, int c , int d) 
{

    if( a <= c && b <= d) return "POSSIBLE";  

    return "IMPOSSIBLE";
}
int main() 
{   
    int t;
    std::cin>>t;
    while(t > 0 )
    {
        int a,b,c,d;
        std::cin>>a>>b;
        std::cin>>c>>d;
        std::cout<<solve(a,b,c,d)<<std::endl;
        t --;
    }

    return 0;
}