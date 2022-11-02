#include<iostream>
#include<algorithm>
#include<vector>

std::vector<int> solve(std::vector<int> scores) 
{
    std::vector<int> ans ;
    int max = scores[0];
    int min = scores[0];

    int minCount = 0;
    int maxCount = 0;
    for (auto score : scores ) 
    {
        if(score < min) 
        {
            
            min = score;
            minCount ++;
        }
        
        if(score > max) 
        {
            max = score;
            maxCount ++;
        }
    }

    ans.push_back(maxCount);
    ans.push_back(minCount);
    return ans;
}

int main () 
{
    std::vector<int> vect {10, 5, 20, 20, 4, 5, 2, 25, 1};
    std::vector<int> ans = solve(vect);
    for(auto i : ans) 
    {
        std::cout<<i<<std::endl;
    }
    return 0;
}