#include<iostream>
#include<vector>

int solve(std::vector<int>& nums) 
{
    int ans{0};
    
    for(auto num : nums) 
    {
        ans ^= num;
    }
    return ans;
}
int main() 
{


    return 0;
}
