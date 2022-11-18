#include<iostream>
#include<vector>

std::vector<int> solve(std::vector<int> p1, std::vector<int> p2) 
{
    std::vector<int> ans;       
}

void display(std::vector<int> d) 
{
    for(auto c : d) 
    {
        std::cout<<c<< " ";
    }
}
int main () 
{
    int t;
    std::vector<int> p1, p2;
    std::cin>>t;
    while(t > 0) 
    {
        int x1, x2;
        std::cin>>x1>>x2;
        p1.push_back(x1);
        p2.push_back(x2);
        t--;
    }
    std::vector<int> ds = solve(p1,p1);
    display(ds);
    return 0;
}