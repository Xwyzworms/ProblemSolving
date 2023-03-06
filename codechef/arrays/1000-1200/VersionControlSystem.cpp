#include<iostream>
#include<set>
int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n,m,k;
        std::cin>>n>>m>>k;
        int a[n];
        int x[m];
        int y[k];
        std::set<int> mk;
        int c = 1 ;
        for(int i =0 ; i < n ; i++) 
        {
            a[i] = c;
            c++;
        }
        for(int i =0 ; i <m ; i++) 
        {
            std::cin>>x[i];
            mk.insert(x[i]);
        }
        int ans2{0};
        for(int i = 0 ; i < k; i++) 
        {
            std::cin>>y[i];
            mk.insert(y[i]);
            for(int j =0; j < m ; j++ )
            {
                if(x[j] == y[i]) ans2++; 
            }
        } 

        std::cout<<ans2<< " "<<n - mk.size()<<std::endl;
    }
    return 0;
}
