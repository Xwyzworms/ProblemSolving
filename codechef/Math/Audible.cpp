#include<iostream>
#include<string>
std::string solve(int range) 
{
    if(range >= 67 && range <= 45000) return "YES";
    return "NO";
}
int main() 
{   
    int t;
    std::cin>>t;
    while( t > 0 ) 
    {
        int tempo;
        std::cin>>tempo;
        std::cout<<solve(tempo)<<std::endl;
        t--;
    }
    return 0;
}