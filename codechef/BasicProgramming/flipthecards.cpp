#include<iostream>
int solve(int a, int b) 
{
    int min {0};
    if(a == b || b == 0 || a == 0) return 0;

    else if(a > b) 
    {
        min = b;
    }
    else 
    {
        min = a;
    }

    int tempAbs = abs(a - min);
    if(tempAbs > b) return min;
    return abs(a-min);

}
int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int p1,p2;
        std::cin>>p1>>p2;
        std::cout<<solve(p1, p2)<<std::endl;
        t--;
    }
    return 0;
}