#include<iostream>
//https://www.codechef.com/problems/DIFFCONSEC
int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        int i;
        std::string bin;
        std::cin>>i;
        std::cin>>bin;
        int count = 0;
        for(int i =0 ; i<bin.size() - 1 ;i++) 
        {
            if(bin[i] == bin[i+1]) count++;
        }
        std::cout<<count<<std::endl;
    }
}
