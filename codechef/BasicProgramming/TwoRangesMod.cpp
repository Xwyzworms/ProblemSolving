#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int a,b,c,d;
        std::cin>>a>>b>>c>>d;
        
        int ans = 0;
        int min {0}, max{0};
        min = std::min(a,c);
        max = std::max(b,d);
    
        for(int i =min ; i <= max;i++)
        {
            if ((i >= a && i <= b) || (i >= c && i <= d) ) 
            {
                ans++;
            }
        }
        std::cout<<ans<<std::endl;

    }
    return 0;


}

