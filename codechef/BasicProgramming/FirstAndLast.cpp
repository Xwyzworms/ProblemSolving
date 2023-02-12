#include<iostream>
#include<vector>
int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n;
        std::vector<int> vect;
        std::cin>>n;

        int prev = 0;
        for(int i =0 ; i< n;i++) 
        {
            int temp;
            std::cin>>temp;
            vect.push_back(temp);
        }
        int ans = vect[0] + vect[n-1];
        for(int i =0; i<n-1;i++)
        {
            int temp = vect[i] + vect[i+1];
            ans = std::max(ans, temp);
        }
            
        std::cout<<ans<<std::endl;
        
    }
    return 0;
}
