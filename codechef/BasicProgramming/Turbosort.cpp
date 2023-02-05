#include<iostream>
#include<vector>
#include<algorithm>
int main() 
{
    int t;
    std::vector<int> ans; 
    std::vector<int> res;
    std::cin>>t;
    while(t--) 
    {
        int temp;
        std::cin>>temp;
        ans.push_back(temp);
    }
    std::sort(ans.begin(), ans.end());

    for(auto a : ans) 
    {
        std::cout<<a<<std::endl;
    }

    return 0;
}
