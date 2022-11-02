#include<iostream>
#include<algorithm>
#include<vector>

int solve(std::vector<int> vect) 
{
    int max {0};
    int totalTallest {0} ;
    for(auto i : vect) 
    {
        if (i > max) 
        {
            max = i;
        }
    }

    for(auto i : vect) 
    {
        if(i == max) 
        {
            totalTallest ++;
        }
    }
    return totalTallest;
}

int main () 
{
    std::vector<int> som {4, 4, 1, 3};
    std::cout<<solve(som)<<std::endl;
    return 0;
}