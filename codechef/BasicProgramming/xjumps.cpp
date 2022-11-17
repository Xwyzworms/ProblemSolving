#include<iostream>

int solve(int p1, int p2) 
{

    if(p1 < p2) 
    {
        return p1;
    }
    int modulo = p1 % p2;
    int ans = p1 / p2;
    return ans + modulo;

}

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) {
        int p1, p2;
        std::cin>>p1>>p2;
        std::cout<<solve(p1, p2)<<std::endl;
        t--;
    }
    return 0;
}