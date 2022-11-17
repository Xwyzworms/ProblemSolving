#include <iostream>
/// @brief TODO Shit
/// @param p1 
/// @param p2 
/// @return 
int solve(int p1, int p2)
{
    if (p1 != 0 && p2 != 0)
    {

        int modulo = abs(p1 - p2);
        if (p2 > p1)
        {
            return abs(p1 - p2);
        }
        else if (p1 > p2)
        {
            return modulo + p1;
        }
    }
    return p1 * 2;
}

int main()
{
    int t;
    std::cin >> t;
    while (t > 0)
    {
        int p1, p2;
        std::cin >> p1 >> p2;
        std::cout << solve(p1, p2) << std::endl;
        t--;
    }
    return 0;
}