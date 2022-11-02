#include<iostream>
#include<vector>

int reverseTheNumber(int n) 
{
    int remainder {0};
    int reversedNumber {0};
    while(n != 0 )
    {
        remainder = n % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        n /= 10;
    }
    return reversedNumber;
}

int solve(int i, int j , int k) 
{
    int total {0};
    while(i <= j) 
    {
        // Do here something shit
        int reversed = reverseTheNumber(i);
        if(abs(i - reversed) % k == 0) total ++;
        i++;
    }
    return total;

}
int main() 
{
    int startingDay {20};
    int endingDay {23};
    int divisor {6};
    std::cout<<solve(startingDay, endingDay, divisor);
    return 0;
}