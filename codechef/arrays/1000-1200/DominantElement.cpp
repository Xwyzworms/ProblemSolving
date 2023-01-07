#include<iostream>
#include<vector>
int main () 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x;
        int ans[1001] = {0}, max{0}, cnts{0};
        std::cin>>x;
        int arr[x];
        for(int i = 0 ; i < x ; i++) 
        {
            std::cin>>arr[i];
            ans[arr[i]]++;
        }

        for(int i =0 ; i < 1001; i ++) 
        {
            if(max < ans[i]) 
            {
                max = ans[i];
            }
        }

        for(int i = 0 ; i < 1001; i++) 
        {
           if(max == ans[i]) cnts++; 
        }
        if(cnts > 1) std::cout<<"NO\n";
        else std::cout<<"YES\n";

    }
    return 0;
}
