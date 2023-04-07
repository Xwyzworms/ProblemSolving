#include<iostream>

int main () 
{
    int t;
    std::cin>>t;
    while(t-- ) 
    {
        int n;
        std::cin>>n;
        int a[n];
        for(int i=0; i < n; i++) 
        {
            int temp;
            std::cin>>a[i];
        }
        int ans  {0};
        for(int i=0;i <n;i++)
        {
            if(a[i] == 1 || a[i] == 2 ||
             a[i] == 3 || a[i] == 4 ||
              a[i] == 5|| a[i] == 6||
               a[i] == 7)
               {
                ans = i + 1;
               }
            
        }

        std::cout<<ans<<std::endl;
    }   
    return 0;
};