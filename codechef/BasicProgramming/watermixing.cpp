#include <iostream>
#include <string>

std::string solve(int initialTemp, int perfect, int hotWater, int coldWater)
{

    int diff = initialTemp - perfect;
    if(diff != 0) 
    {
        if(diff < 0) 
        {
            if(abs(diff) <= hotWater) return "Yes";
            return "No";
        }   
        else 
        {
            if(diff <= coldWater) return "Yes";
            return "No";   
        }
    }
    return "Yes";
}

int main()
{

    int t;
    std::cin >> t;
    while (t > 0)
    {
        int p1, p2, p3, p4;
        std::cin >> p1 >> p2 >> p3 >> p4;
        std::cout << solve(p1, p2, p3, p4) << std::endl;
        t--;
    }

    return 0;
}