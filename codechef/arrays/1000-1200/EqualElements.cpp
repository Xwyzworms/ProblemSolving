#include<iostream>
#include<unordered_map>


int main () 
{

    int t;
    std::cin>>t;
    while(t--) 
    {
        int max {0};
        std::unordered_map<int, int> umap;
        int n;
        std::cin>>n;
        for(int i =0; i < n;i++) 
        {
            int temp;
            std::cin>>temp;
            umap[temp] += 1;
        }
        for(auto x : umap) 
        {
            if(x.second > max) 
            {
                max = x.second;
            }
        }

        std::cout<<n - max <<std::endl;

    }
    return 0; 
}
