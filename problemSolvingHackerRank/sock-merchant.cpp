#include<iostream>
#include<algorithm>
#include<vector>

int solve(int n, std::vector<int> ar) 
{
    bool arr[1000] {false};
    int ans {0};
    for(auto i : ar) 
    {
        if(arr[i]) 
        {
            std::cout<<i<<std::endl; 
            ans++;
        }   
        arr[i] = !arr[i];
    }
    return ans;
}
int main() 
{
    std::vector<int> ar {1,3 , 2, 1, 2, 1, 3, 2};
    std::cout<<solve(ar.size(), ar)<<std::endl;
    return 0;
}