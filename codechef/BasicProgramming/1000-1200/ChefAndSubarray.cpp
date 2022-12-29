#include<iostream>

int main() 
{
    
    int t;
    std::cin>>t;
    while(t --) 
    {
        int x;
        std::cin>>x;
        int a[x];
        for(int i = 0; i<x;i++) std::cin>>a[i];
        int cnt = x;
        for(int i = 0; i < x ; i++) 
        {

            int sum = a[i];
            int prod {a[i]};
            for(int j = i + 1; j < x; j ++) 
            {
                sum+= a[j];
                prod *= a[j];

                if(sum == prod) 
                {
                    cnt++;
                }
            }
        }
            std::cout<<cnt<<std::endl;
    }


    return 0;
}

