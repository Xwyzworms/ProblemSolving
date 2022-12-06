#include<iostream>
#include<unordered_set>
#include<cmath>
#include<algorithm>
int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int n,i,j;
        std::cin>>n;
        int tloop = n*2;
        int sum {0};
        int a[2*tloop];
        for(int i =0 ; i < tloop ; i++) 
        {
            std::cin>>a[i];
        }

        for(i =0 ; i<tloop;i++) 
        {
            sum = 0;
            for(j = i + 1; j < tloop; j++) 
            {
                if(a[i] == a[j]) sum++;
            }
            if(sum >= 2)
            {
                std::cout<<"NO"<<std::endl; 
                break;
            } 

        }
        if(i == tloop) std::cout<<"YES"<<std::endl;
        t--;
    }
    return 0; 
}
