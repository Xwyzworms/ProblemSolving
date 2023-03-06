#include<iostream>
#include<unordered_map>
#include<cmath>
#include<algorithm>
int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n;
        std::cin>>n;
        std::unordered_map<char,int> mem;
        
        std::string comp;
        for(int i = 0 ; i < n ; i++) 
        {
            std::cin>>comp;
            for(char a : comp) 
            {
                mem[a]++;
            }
        } 
        // Only take the minimum occurence from all 
        // Normalize C and e to 1 , since both use 2 occurence
        std::cout<<std::min({ mem['c'] / 2 , mem['o'], mem['d'], mem['e'] / 2,mem['h'], mem['f'] })<<std::endl;
    }
    return 0;
}
