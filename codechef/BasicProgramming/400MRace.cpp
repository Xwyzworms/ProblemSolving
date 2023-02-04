#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x,y,z;
        std::cin>>x>>y>>z;
        float avg_a = 400.0 /x;
        float avg_b = 400.0/y;
        float avg_c = 400.0/z;
        if(avg_a > avg_b &&  avg_a > avg_c) std::cout<<"Alice\n";
        else if (avg_b > avg_a && avg_b > avg_c) std::cout<<"Bob\n";
        else std::cout<<"Charlie\n";
    }
    return 0;
}
