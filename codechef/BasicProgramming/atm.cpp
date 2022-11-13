#include<iostream>
#include<iomanip>

float solve(int takeout, float balance )  
{
    if( ( ((float)takeout)+ 0.5) <= balance &&  (takeout % 5 == 0 )  )  {
         
        return balance - takeout - 0.50;
}
    else  
    {

        return balance;
    }
}


int main() 
{
    int inp1;
    float inp2;
    std::cin>>inp1>>inp2;
    std::cout<< std::fixed << std::showpoint;
    std::cout<<std::setprecision(2)<<solve(inp1, inp2)<<std::endl;
    return 0;
}