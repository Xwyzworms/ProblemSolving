#include<iostream>
#include<vector>
#include<list>


void display(std::vector<int> d) 
{
    for(auto a : d) 
    {
        std::cout<<a<<std::endl;
    }
}

std::vector<int> solve(std::vector<int> a, int k, std::vector<int> queries) 
{
    // Rotate the array, Use LInkedList
    std::list<int> aList(a.begin(), a.end());
    std::vector<int> ans;
    for(int i =0; i < k; i++) 
    {
        int temp =aList.back();
        aList.pop_back();
        aList.push_front(temp);
    }

    std::vector<int> an (aList.begin(), aList.end());
    for(int ax : queries) 
    {
        ans.push_back(an[ax]);
    }

    return ans;
}

int main () 
{
    std::vector<int> a {3, 4, 5};
    int k = 2; 
    std::vector<int> queries {1, 2};
    display(solve(a,k,queries));
    return 0;
}