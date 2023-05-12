#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int ans[4];
        int max= -1;
        int sum = 0;
        for(int i =0;i <4;i++ ) 
        {
            std::cin>>ans[i];
            if(max < ans[i]) 
            {
                max = ans[i];
            }
            sum += ans[i]; 
        }

        if(sum - max  < max ) 
        {
            std::cout<<"YES\n";
        }
        else
        {
            std::cout<<"NO\n";
        }


    }
    return 0;
}