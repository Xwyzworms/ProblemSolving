#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int cnt1 = 0;
        int cnt2 = 0;
        for(int i =1 ; i <= 10 ;i++)  
        {
            int temp;
            std::cin>>temp;
            if(i % 2 == 0)
            {
                if(temp == 1) cnt2++;
            } 
            else 
            {
                if(temp == 1) cnt1++;
            }
        }

        if(cnt1 > cnt2) 
        {
            std::cout<<"1\n";
        }
        else if(cnt2>cnt1)
        {
            std::cout<<"2\n";
        }
        else 
        {
            std::cout<<"0\n";
        }
    }
    return 0;
}
