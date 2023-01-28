#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int inp, cntR=0, cntS=0;
        for(int i =0 ;i < 7;i++) 
        {
            std::cin>>inp;
            if(inp == 1) cntS++;
            else cntR++;
        }
        if(cntS > cntR) std::cout<<"Yes\n";
        else std::cout<<"No\n";
        

    }
    return 0;
}
