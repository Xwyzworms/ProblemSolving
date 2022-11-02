#include <iostream>
#include <vector>

using namespace std;
int solve(std::vector<std::vector<int>> arr)  
{
    int left = 0;
    int right = 0;

    // Get The Right Diagonal
    for(int i = 0 ;i < arr[0].size(); ++i) 
    {
        // Get the right side
        left += arr[i][i];
        right+= arr[i][arr.size()- 1 -i];
        std::cout<<left<<" "<<right<<std::endl;
    }
    return abs(left - right);
    // Get The Left Diagonal
}

int main () 
{
    std::vector<std::vector<int>> arr { {1, 2, 3}, {4, 5, 6}, {7,8,9}};
    std::cout<<solve(arr)<<std::endl;
}