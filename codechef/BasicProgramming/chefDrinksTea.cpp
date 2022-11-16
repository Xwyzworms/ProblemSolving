#include <iostream>
#include <cmath>
int solve(double p1, double p2, double p3)
{
    double divisor = ceil(p1 / p2);
    return p3 * divisor;
}
int main()
{
    int t;
    std::cin >> t;
    while (t > 0)
    {
        double p1, p2, p3;
        std::cin >> p1 >> p2 >> p3;
        std::cout<< solve(p1, p2, p3) << std::endl;
        t--;
    }
    return 0;
}