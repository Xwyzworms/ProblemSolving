#include<iostream>
#include<unordered_map>

void display(std::unordered_map<int,int> s) 
{
    for(auto x : s) 
    {
        std::cout<<x.first<< " " << x.second << std::endl;
    }
}
int main () 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        std::unordered_map<int,int> umap ;
        int n,a,b;
        std::cin>>n>>a>>b;
        int x;
        while(n > 0) 
        {
            int temp {0};
            std::cin>>temp;
            umap[temp] += 1;
            n--;
        }
        display(umap);
        t--;
        break;
    }

    return 0;
}