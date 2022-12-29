#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x,cnt{0};
        char temp;
        std::cin>>x;
        for(int i = 0; i < x ; i++)
        {
            std::cin>>temp;
            if(temp == '0') 
            {
                cnt ++;
                if(cnt > 30) break;
           }
        }

        if(120 - cnt >= 90) std::cout<<"YES"<<std::endl;
        else std::cout<<"NO"<<std::endl;
    }
    return 0;
}
