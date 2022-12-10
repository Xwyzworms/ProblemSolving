#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int x1,x2,x3;
        std::cin>>x1>>x2>>x3;
        if(x1  == x2 && x2 == x3 && x1 == x3) std::cout<<"no"<<std::endl;
        else 
        {
            if(x1 + x2 == x3 || x3 + x1 == x2 || x2 +x3 == x1) std::cout<<"yes"<<std::endl;
            else std::cout<<"no"<<std::endl;
        }
        t--;
    }
    return 0;
}
