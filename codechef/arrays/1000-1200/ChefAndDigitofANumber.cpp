#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    std::string mafs;
    while(t--) 
    {
        std::cin>>mafs;

        int zero{0},one {0};
        for(auto a : mafs) 
        {
            if(a =='1') 
            {
                one++;
            }
            else
            {
                zero++;
            }
        }
        if(one == 1 || zero == 1)
        {
            std::cout<<"Yes\n";
        }
        else 
        {
            std::cout<<"No\n";
        }
    }
    return 0;

}
