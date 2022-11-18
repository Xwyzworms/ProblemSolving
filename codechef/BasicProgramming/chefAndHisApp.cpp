#include <iostream>

int solve(int s, int x, int y, int z)
{
    int unused = s - (x + y);
    if (unused >= z)
    {
        return 0;
    }
    else
    {
        if (z <= x || z <= y )
            return 1;
        
        else if( z <= unused + y || z <= unused + x) return 1;
        
        else if(z <= x + y || z <= unused + x + y ) return 2;

    }
    return 0;
}

int main()
{
    int t;
    std::cin >> t;
    while (t > 0)
    {
        int s, x, y, z;
        std::cin >> s>>x>>y>>z;
        std::cout << solve(s, x, y, z) << std::endl;
        t--;
    }
    return 0;
}