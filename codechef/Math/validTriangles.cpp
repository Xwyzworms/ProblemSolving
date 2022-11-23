#include <iostream>

int main()
{
    int t;
    std::cin >> t;
    while (t > 0)
    {
        int x, y, z;
        std::cin >> x >> y >> z;
        if(x+y+z == 180) std::cout<<"yes"<<std::endl;
        else std::cout<<"no"<<std::endl;
        t--;
    }
    return 0;
}