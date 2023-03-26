#include<iostream>

int main () 
{
 
    int t;
    std::cin>>t;
    while(t-- ) 
    {
        int n;

        std::cin>>n;
        std::string str;
        std::cin>>str;
        int cnt0= 0 ;
        int cnt1 =0;
        for(int i =0 ; i < str.size() - 1; i ++) 
        {
            if(str[i] == '0') 
            {
                cnt0++;
            }
            else 
            {
                cnt1++;
            }
        }
        if(cnt0 == n || cnt1 == n)
        {
            std::cout<<1<<std::endl;
        }
        else if(cnt0 == cnt1 ) 
        {
            std::cout<<2*cnt1<<std::endl;
        }
        else 
        { 
            std::cout<<2*std::min(cnt0,cnt1) + 1<<std::endl;
        }
              
    }
    return  0;
}
