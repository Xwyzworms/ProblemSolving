#include<iostream>
#include<vector>
int getTheClosestMultiple5(int value) 
{
    int modValue = value % 5;
    return value + abs(modValue - 5);
}
std::vector<int> solve(std::vector<int> grade) 
{
    std::vector<int> ans ;
    for(int i : grade) {
        int closest = getTheClosestMultiple5(i);
        if(abs(i - closest) < 3 && i >= 38) 
        {
            ans.push_back(closest);
        }
        else 
        {
            ans.push_back(i);
        }
    }
    return ans;

}



void display(std::vector<int> vect) 
{   
    for(auto i : vect) 
    {
        std::cout<<i<<std::endl;
    }

}
int main () {

    std::vector<int> vect {75, 67, 38, 33};
    std::vector<int> ans = solve(vect);
    display(ans);
    return 0;
}