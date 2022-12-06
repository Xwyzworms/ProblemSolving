#include<iostream>
int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int n;
        std::cin>>n;
        int odds {0};
        for( int i = 0; i < n ; i++) 
        {
            int temp;
            std::cin>>temp;
            if(temp % 2 != 0) 
            {
                odds ++;
            }
        
        }
        t--;
        if(odds % 2 == 0 && odds >= 2) std::cout<<"YES"<<std::endl;
        else std::cout<<"NO"<<std::endl;
    }
    return 0;
}
