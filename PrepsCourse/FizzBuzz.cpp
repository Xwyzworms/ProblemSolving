#include<iostream>


void solve(int nums) 
{
    for (int i = 1 ; i <= nums ; i ++) 
    {
        if(i % 3 == 0 && i % 5 == 0) 
        {
            std::cout<<"FizzBuzz"<<std::endl;
        }
        else if(i % 3 == 0) 
        {
            std::cout<<"Fizz"<<std::endl;
        }
        else if(i % 5 == 0) 
        {
            std::cout<<"Buzz"<<std::endl;   
        }
        else 
        {
            std::cout<<i<<std::endl;
        }
    }

}

int main() 
{
    int nums = 10;
    solve(nums);
    return 0;
}