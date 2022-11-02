#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_set>

int solve(std::vector<int> s, int d, int m) 
{
    int ans {0};
    int currentSum {0};
    for (int i = 0; i < s.size() ; i++ ) 
    {
        currentSum += s[i];
        if(i >= (m - 1)) 
        {
            if(currentSum == d) 
            {
                ans ++;
            }
            currentSum -= s[i-(m-1)];
        }   
    }
    return ans;
}

int main () 
{
    std::vector<int> vect {2,2,1,3,2};
    std::cout<<solve(vect, 4, 2);

    return 0;
}