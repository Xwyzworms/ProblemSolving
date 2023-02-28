#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
     
        int n;
        std::cin>>n;
        int s[n], min {0};
        std::string b;
        for(int i = 0;i < n ; i++) 
        {
            std::cin>>s[i];
            
        } 
        min = 999999999;
        std::cin>>b;
        // Loop Invariant a[min] < a[0..i]  
        for(int i=0; i<n ; i++) 
        {
            if(b[i] == '0') 
            {
                min = std::min(min,s[i]);       
            }
        }

        std::cout<<min<<std::endl;
    }
    return 0;
}
