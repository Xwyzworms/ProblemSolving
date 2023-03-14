#include<iostream>
int main() 
{
    int t;
    std::cin>>t;
    while(t--)
    {
        int inp1[3];
        int inp2[3];
        
        int cnt1{0}, cnt2{0};
        for(int i = 0; i < 3;i++)
        {
            std::cin>>inp1[i];
        }

        for(int i = 0; i < 3;i++)
        {
            std::cin>>inp2[i];
        }

        for(int i = 0;i<3;i++)
        {
            if(inp1[i] == 1) cnt1++;
            if(inp2[i] == 1) cnt2++;
        }

        if(cnt1 != 0 || cnt2 != 3)
        {
            if(cnt1 == cnt2 || 3-cnt1 == 3 - cnt2){
                std::cout<<"Pass\n";
            }
            else 
            {
                std::cout<<"Fail\n";
            }

        }
        else 
        {
            std::cout<<"Fail\n";
        }
    }
    return 0;
}
