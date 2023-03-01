#include<iostream>


int sumDigits(int n) 
{
    if (n == 0 )
    {
        return 0;
    }
    int smallOut = sumDigits(n/10); // 3021 / 10 --> 302 / 10 --> 30 dst
    return smallOut + n%10; // N % 10 represent the last digit
}
int main() 
{
    int digits = 81231;
    std::cout<<sumDigits(digits)<<std::endl;
    return 0;
}