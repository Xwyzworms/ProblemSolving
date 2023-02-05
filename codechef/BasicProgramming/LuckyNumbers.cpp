#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        std::string x;
        bool isLucky = false;
        std::cin>>x;
        for(char s : x)  
        {
            if(s =='7') 
            {
                isLucky = true;
                break;
            }
        }
        if(isLucky) std::cout<<"YES\n";
        else std::cout<<"NO\n";
    
    }
    return 0;
}
