#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        std::string sts;
        std::cin>>sts;
        int group = 0;
        char prev = '0';
        for(int j = 0 ; j < sts.length() ; j++) 
        {
            char curr = sts[j];
            if( prev == '1' && curr == '0' ) 
            {
                group ++;
            }
            prev = curr;   
        }

        std::cout<<group + (prev == '1')<<std::endl;
    }
    return 0;
}