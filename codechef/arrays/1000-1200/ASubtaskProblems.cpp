#include<iostream>

int main() 
{
    int t;
    std::cin>> t;
    while(t--) 
    {
        int n,m,k;
        std::cin>>n>>m>>k;
        int a[n];
        int ans = 0;
        int counter = 0;
        int cnt = 0;
        bool first = false;
        for (int i =0 ; i < n;i++) 
        {
            std::cin>>a[i];
        }
        for(int i =0 ; i <n ;i++) 
        {
            if(a[i] == 1 && counter <= m) 
            {
                counter++;       
                cnt ++;
            }
            else if(a[i]== 0 && counter <= m && first == false)
            {
                break;
            }
            if(counter == m) 
            {
                first = true;
                counter = 0;
            }
        }
        if(cnt == n) 
        {
            std::cout<<100<<std::endl;
        }else if(first == true ) 
        {
            std::cout<<k<<std::endl;
        }
        else 
        {
            std::cout<<0<<std::endl;
        }
    }
    return 0;
}