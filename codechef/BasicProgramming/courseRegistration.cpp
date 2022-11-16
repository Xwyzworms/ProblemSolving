#include<iostream>
#include<string>

std::string solve(int x, int y, int z) 
{
    int absDiff = abs(z - y);
    if(x <= absDiff) return "YES";
    return "NO";
}

int main() 
{
    int t;
    std::cin >>t;
    while(t > 0) 
    {
        int a, b, c;
        std::cin>>a>>b>>c;
        std::cout<<solve(a,b,c)<<std::endl;   
        t--;
    }
    return 0;
}