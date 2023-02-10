#include<iostream>

int sum(int a)
{
    return(a*(a+1))/2;
}   
int main()
{   
    int t;
    std::cin>>t;
    while(t--) 
    {
        int d,n, ans;
        std::cin>>d>>n;
        ans=n;
        while(d--)
        {
            ans = sum(ans);

        }
        std::cout<<ans<<std::endl;
    }
    return 0;
}
