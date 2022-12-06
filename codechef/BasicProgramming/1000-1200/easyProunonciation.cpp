#include<iostream>
#include<string.h>
int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {

        int n, ans{0};
        std::cin>>n;
        std::string temp;
        std::cin>>temp;

        for(char i : temp)
        {
            if(i == 'a' || i == 'i' || i == 'e' || i == 'u' || i == 'o' ) 
            {
                ans = 0;
            }
            else 
            {
                ans ++;
            }
            if(ans == 4 ) break;
        }
        if(ans < 4) std::cout<<"YES"<<std::endl;
        else std::cout<<"NO"<<std::endl;
        t--;
    }
    return 0;
}
