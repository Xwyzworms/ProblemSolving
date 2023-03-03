#include<iostream>
#include<unordered_map>

int main () 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n;
        std::cin>>n;
        int a[n];
        bool flag = false;
        std::unordered_map<int, int> maps;
        for(int i = 0; i < n ; i++) 
        {
            std::cin>>a[i];
            maps[a[i]] ++;
        }
        for(auto [k,v] : maps) 
        {
            if(v%k != 0) 
            {
                flag = true;
                break;
            } 
        }

        std::cout<< (flag == true? "NO" : "YES" ) << std::endl;

    
    }
    return 0;
}
