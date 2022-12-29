#include<iostream>

int main() 
{
 
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n,x,s, ans;
        std::cin>>n>>x>>s;
        int tempA, tempB, current;
        for(int i = 0; i< s; i++) 
        {
            std::cin>>tempA>>tempB;
            if(tempA == x) x = tempB;
            else if(tempB == x) x = tempA;
            
        }
        std::cout<<x<<std::endl;
    }
    return 0;
}
