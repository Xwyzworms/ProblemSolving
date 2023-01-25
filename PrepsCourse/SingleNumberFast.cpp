#include <iostream> 
#include <vector>

int solve(std::vector<int>& arr) 
{
    // Using XOR concept
    int ans = 0;
    for(int i = 0 ; i < arr.size() ; i++) 
    {
        ans ^= arr[i];
    }
    return ans;
}

int main () 
{
    std::vector<int> testcase1 = {2,2,1};
    std::vector<int> testcase2 = {4,1,2,1,2};
    std::cout<<solve(testcase1)<<std::endl;
    std::cout<<solve(testcase2)<<std::endl;
    return 0 ;   
}
