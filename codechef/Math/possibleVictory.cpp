#include<iostream>
int main() 
{
    int r, o, c;
    std::cin>>r>>o>>c;
    int currentOvers = 6* (20 - o);
    int maxValue = currentOvers *6;
    if(c + maxValue > r) std::cout<<"YES"<<std::endl;
    else std::cout<<"NO"<<std::endl;

    return 0;
}