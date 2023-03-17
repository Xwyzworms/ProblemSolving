#include<iostream>
#include<set>
#include<climits>
int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n;
        std::cin>>n;
        int a[n];
        int min{INT_MAX}, max{INT_MIN};
        int ans {1}; // Include Himself
        for(int i =0 ; i < n ; i++ ) 
        {
            std::cin>>a[i];
        }

        for(int i =0 ; i< n-1 ; i++) 
        {
            int temp = std::abs(a[i+1] - a[i]);
            if(temp <= 2) 
            {
                ans++;
            }
            else 
            {
                min = std::min(min, ans);
                max = std::max(max, ans);
                ans = 1;

            }
        }
        min = std::min(min , ans);
        max = std::max(max , ans);
        std::cout<<min<< " " << max<<std::endl;
    
    }
    return 0;
}
