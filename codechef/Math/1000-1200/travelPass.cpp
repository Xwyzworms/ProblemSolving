#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n,a,b, sum =0 ;
        std::string s;
        std::cin>>n>>a>>b;
        std::cin>>s;
    
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] =='0') 
            {
                sum += 1*a;
            }
            else {
                sum += 1*b;
            }
        }
        std::cout<<sum<<std::endl;
    }


}
