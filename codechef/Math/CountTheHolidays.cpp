#include<iostream>

int main() 
{
    int t ;
    std::cin>>t;
    while(t--) 
    {
        int n;
        std::cin>>n;
        int totHolidays = n + 8;
        for(int i = 0; i< n ;i ++) 
        {
            int inp;
            std::cin>>inp;
            if(inp % 7 == 6 || inp % 7 == 0)
            {
                totHolidays --;
            }
        }
        std::cout<<totHolidays<<std::endl;
        
    }
    return 0;
}
