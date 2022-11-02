#include<iostream>
#include<algorithm>
#include<vector>
#include<map>

int solve(std::vector<int> arr) 
{
    int lowestType {-1};
    std::map<int, int> joma;
    for(int i=0; i< arr.size(); i++) 
    {
        if(joma.find(arr[i]) == joma.end())  
        {
            // not found
            joma.insert({arr[i], 1});
        }
        else {
            int getValue = arr.at(arr[i]);
            joma.insert({arr[i], getValue++});
        }
    }


}
int main() 
{
    std::vector<int> {1, 1, 2, 2, 3};
    return 0;
}