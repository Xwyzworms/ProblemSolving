#include<iostream>
#include<algorithm>
#include<vector>


std::vector<int> solve(std::vector<int> p) {
        std::vector<int> ans ;
        for(int io = 0; io < p.size() ; io++) 
        {
            int x = io + 1;
            int y = io;

            for(int j = 0 ; j<p.size(); j++) 
            {
                if(p[j] == x) {
                    y = j + 1;
                    break;
                }
            }

            for (int j = 0; j <p.size(); j++) 
            {
                if(p[j] == y) 
                {
                    y = j + 1;
                    break;
                }
            }

            ans.push_back(y);
        }
        return ans;
}

void display(std::vector<int> ans) 
{   
    for(auto a : ans) 
    {
        std::cout<<a<<" ";
    }

}
int main() {
    std::vector<int> sol {2,3,1};
    std::vector<int> ans = solve(sol);
    display(ans);
    return 0;
}