#include<iostream>
#include<algorithm>
int main () 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int k;
        std::cin>>k;
        int a[k];
        for(int i = 0 ; i < k; i++) 
        {
            std::cin>>a[i];
        }
        int toLook;
        std::cin>>toLook;
        int valToboo = a[toLook - 1];
        std::sort(a,a+k);
        for(int i =0 ; i<k; i++) 
        {
            if(valToboo == a[i]) 
            {
                std::cout<<i+1<<std::endl;
            }
        }
    }
    return 0;
}
