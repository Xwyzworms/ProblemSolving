#include <iostream>

// O(Log(n))
int solve(int nums)  
{
    int ans = 0;
    
    for(int i = 5; i <= nums ; i=i*5) 
    {
        ans = ans + nums / i;
    }

    
    return ans;
}



int main() 
{
    // 20 = 1 x 2 x 3 x 4 x 5 x 6 x7 x8 x9 x 10 x 11 x12 x13 x 14 x 15 x 20 
    int input = 25;
    int input2 = 20; 
    int input3 = 10;
    int input4 = 5;
    std::cout<<solve(input)<<std::endl;
    std::cout<<solve(input2)<<std::endl;
    std::cout<<solve(input3)<<std::endl;
    std::cout<<solve(input4)<<std::endl;

    return 0;
}