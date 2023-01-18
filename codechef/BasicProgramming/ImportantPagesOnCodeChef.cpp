#include<iostream>

int main () 
{
    int a,b;
    std::cin>>a>>b;
    if(a == 0 && b==0 ) std::cout<< "https://www.codechef.com/practice" <<std::endl;
    else if (a == 0 && b == 1) std::cout<< "https://www.codechef.com/practice" <<std::endl;
    else if(a == 1 && b == 0) std::cout<<"https://www.codechef.com/contests"<<std::endl;
    else if(a == 1 && b == 1) std::cout<<"https://discuss.codechef.com"<<std::endl;
    return 0;
}
