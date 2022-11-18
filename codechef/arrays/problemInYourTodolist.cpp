#include<iostream>
#include<vector>

int solve(int n) 
{
    std::vector<int> a;
    int constraint = 1000;
    int counter {0};
    while( n > 0) 
    {
        int temp;
        std::cin>>temp;
        a.push_back(temp);
        n--;    
    }

    for (auto x : a )
    {
        if(x >= constraint) counter++;
    }
    return counter;
}


int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int inp;
        std::cin>>inp;
        std::cout<<solve(inp)<<std::endl;
        t--;
    }
    return 0;
}