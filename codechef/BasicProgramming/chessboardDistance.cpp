#include<iostream>
int solve(int x1, int y1, int x2, int y2) 
{
    int xAbs = abs(x1 - x2);
    int yabs = abs(y1 - y2);

    return std::max(xAbs, yabs);
}
int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) {
        int x1,x2,y1,y2;
        std::cin>>x1>>y1>>x2>>y2;
        std::cout<<solve(x1,y1,x2,y2)<<std::endl;
        t--;
    }
    return 0;
}