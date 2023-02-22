#include<iostream>

int pow(int x, int n) 
{

    //Base Case dari pow
    if(n == 0) 
    {
        return 1;
    }

    //x^n = x * power(x,n-1)
    // Say x =5, n=2
    // 5^2 = 5* power(5,2-1) First call
    // 5*power(5,1-1) Second Call
    // 5*power(5,0) LAST CALL (Get basecase) 
    // return 1 from base call
    // 5*1 --> second call
    // 5*5 --> From last call
    int thePower = x * pow(x,n-1);

    return thePower;


}

int main() 
{
    std::cout<<pow(5,2)<<std::endl;   
    return 0;
}