#include<iostream>
#include<cmath>
int solve(int n1, int n2) 
{
    int totalPizzas = n1 * n2;
    int divi = std::floor(totalPizzas / 4);
    if(totalPizzas % 4 != 0) divi++; 
    return  divi;

}

int main() 
{   
    int t;
    std::cin>>t;
    while(t >0 )
    {
        int n1, n2;
        std::cin>>n1>>n2;
        std::cout<<solve(n1, n2)<<std::endl;
        t--;
    }
    return 0;
}