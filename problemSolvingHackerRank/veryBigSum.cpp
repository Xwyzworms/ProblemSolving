#include<iostream>
#include<vector>

long solve(std::vector <long > vect) 
{
    long ans = {0};

    for (auto i : vect) 
    {
        ans += i;
    }
    return ans;

}
int main() 
{
    std::vector<long> vect {10000, 5 ,1000, 10000};
    solve(vect);
}