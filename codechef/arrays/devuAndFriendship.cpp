#include<iostream>
#include<set>
#include<algorithm>
int solve(int n) 
{   
    std::set<int> setMy;
    int counter {0};
    while(n > 0) 
    {
        int temp;
        std::cin>>temp;
        setMy.insert(temp);
        n--;
    }

    return setMy.size();
}

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int n;
        std::cin>>n;
        std::cout<<solve(n)<<std::endl;
        t--;
    }
    return 0;
}