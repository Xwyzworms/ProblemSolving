#include <iostream>
#include <vector>
#include <algorithm>

void solve(std::vector<int> vect) 
{
    int minimumSum {0};
    int maximumSum {0};
    // Sorted dulu aja
    std::sort(vect.begin(), vect.end());

    for(int i = 0; i < vect.size() - 1 ; i++) 
    {
        minimumSum += vect[i];
    }

    for(int i = vect.size() ; i >= vect.size() - vect.size() + 1; i--) 
    {

        maximumSum += vect[i];
    } 
    std::cout<<minimumSum<< " " <<maximumSum<<std::endl;

}

int main () 
{
    std::vector<int> vect {1, 3, 5, 7, 9};
    solve(vect);
}