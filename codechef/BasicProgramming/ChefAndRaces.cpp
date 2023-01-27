#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x,y,a,b, cnt=2;
        std::cin>>x>>y>>a>>b;
        if(x == a || x == b ) 
        {
            cnt--;
        }
        if(y == a || y == b) 
        {
            cnt--;
        }
        std::cout<<cnt<<std::endl;
    }
    return 0;
}
