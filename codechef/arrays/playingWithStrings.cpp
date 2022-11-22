#include<iostream>
#include<string>
#include<vector>
// Not yet Solved
//
std::string solve(int n) 
{
    std::string s1;
    std::string s2;
    
    std::cin>>s1;
    std::cin>>s2;
    int counter {0};
    int j {0};
    for(int i =0 ; i < n ; i ++) 
    {
        if(s1[i] != s2[j]) counter++;
        j++;
    }
    if(counter % 2 ==0 ) return "YES";
    return "NO";
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