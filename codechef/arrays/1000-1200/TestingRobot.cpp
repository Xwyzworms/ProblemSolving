#include<iostream>
#include<unordered_set>
int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n,x;
        std::string roboPath;
        std::cin>>n>>x;
        std::cin>>roboPath;
        std::unordered_set<int> uset;
        uset.insert(x);
        for(int i = 0 ; i < roboPath.size(); i++) 
        {
            if(roboPath[i] == 'R') x++;
            else x--;

            uset.insert(x);
        }
        
        std::cout<<uset.size()<<std::endl;
    }
    return 0;
}

