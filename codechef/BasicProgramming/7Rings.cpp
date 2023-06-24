#include<iostream>
#include<cmath>
int getFirstDigit(int num) 
{
    while(num >= 10) 
    {
        num /= 10;
    }
    return int(num);
}
bool isValid(const int value) 
{
    int numberDigit = int(log10(value) + 1);
    if(numberDigit == 5 && getFirstDigit(value) != 0) 
    {
        return true;
    }
    else 
    {
        return false ;
    }
}
int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x,y;
        std::cin>>x>>y;
        std::string result = isValid(int(x*y)) ? "YES\n" : "NO\n";
        std::cout<< result;
    }
    return 0;
}