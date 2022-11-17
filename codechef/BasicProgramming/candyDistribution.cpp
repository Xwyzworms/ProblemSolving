#include <iostream>
#include <string>
std::string solve(int candies, int friends)
{
    if (candies % friends == 0)
    {
        int totalCandies = candies / friends;
        if (totalCandies % 2 == 0)
            return "Yes";
        return "No";
    }
    return "No";
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