#include<iostream>

int main ()
{
    int t;
    std::cin>>t;
 
    while(t--) 
    {
        int g,c;
        std::cin>>g>>c;
        /*
         * We Try to find the minimum height
         * Therefore H = v^2 / (2.g)
         * */
        std::cout<<((c*c) / (2*g))<<std::endl;
    }

    return 0;
}
