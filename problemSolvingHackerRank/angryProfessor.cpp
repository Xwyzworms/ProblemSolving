#include <iostream>
#include<algorithm>
#include<vector>
#include<string>

std::string solve(int k, std::vector<int> a) 
{
    int counts {0};

    for(auto student  : a) 
    {
        if (student <= 0) counts ++ ;
    }
    if(counts == k) return "NO";
    else return "YES";
}

int main () 
{
    std::vector<int> a {-1, -3, 4 , 2};
    std::cout<<solve(3,a )<<std::endl;
    return 0;
}