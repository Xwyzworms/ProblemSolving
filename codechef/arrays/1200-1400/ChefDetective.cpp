#include<iostream>

int main() 
{
    int n;
    std::cin>>n;
    int a[n];
    int freq[n+1] = {0};

    for(int i = 0 ; i < n ; i++) 
    {
        std::cin>>a[i];
        freq[a[i]]++;
    }

    for(int i =0 ; i <= n;i++) 
    {
        if(freq[i] == 0) 
        {
            std::cout<<i<<" ";
        }
    }
    std::cout<<std::endl;
}
