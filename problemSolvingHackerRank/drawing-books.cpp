#include<iostream>
#include<vector>
#include<math.h>

int solve(int n, int p) 
{
    int totalFlips = floor(n / 2);
    int rightFlips = floor(p / 2);
    int leftFlips = totalFlips - rightFlips;

    return std::min(rightFlips, leftFlips);
}
int main() 
{
    int n = 95073;
    int p = 17440;
    int n1 = 18183;
    int p2 = 18042;
    int x = 6;
    int y = 5;
    std::cout<<solve(x,y)<<std::endl;
}