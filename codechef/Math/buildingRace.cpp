#include<iostream>

void findMe() 
{
    std::cout<<"hello world";
}

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        float a,b,x,y;
        std::cin>>a>>b>>x>>y;
        float diffChef = a / x;
        float diffChefina = b / y;
        if(diffChef == diffChefina) std::cout<<"both"<<std::endl;
        else if(diffChef > diffChefina) std::cout<<"chefina"<<std::endl;
        else std::cout<<"chef"<<std::endl;
        t--;
    }
    return 0;
}
