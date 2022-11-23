#include <iostream>
#include <cmath>

int main()
{
    int t;
    std::cin >> t;
    while (t > 0)
    {
        int n, x;
        std::cin >> n >> x;
        if (n >= x)
        {

            int totalMinutes = x * 3;
            int totalListen{0};
            if (n % 3 == 0)
            {
                totalListen = n / totalMinutes;
            }
            else
            {
                totalListen = std::ceil((double)n / (double)totalMinutes) - 1;
            }
            std::cout << totalListen << std::endl;
        }
        else
        {
            std::cout << "0" << std::endl;
        }
        t--;
    }
    return 0;
}