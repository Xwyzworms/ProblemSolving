#include<iostream>
#include<string>
std::string solve (int n) 
{
    if(n% 2 == 0) return "YES";
    return "NO";
}
int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int temp;
        std::cin>>temp;
        std::cout<<solve(temp)<<std::endl;
        t--;
    }
    return 0;
}