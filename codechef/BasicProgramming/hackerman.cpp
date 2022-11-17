#include<iostream>
#include<string>
std::string solve(int p1, int p2) 
{

    int sum  =  p1 + p2;
    int counter = 0;

    for(int i = 1; i <= sum ; i++) 
    {
        if(sum % i == 0) counter ++;
    }
    if(counter == 2) return "Alice";
    return "Bob";
}

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0 )
    {   
        int p1,p2;
        std::cin>>p1>>p2;
        std::cout<<solve(p1,p2)<<std::endl;
        t--;
    }
    return 0;
}