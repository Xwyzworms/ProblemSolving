#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int amin,bmin,cmin,tmin,a,b,c;
        std::cin>>amin>>bmin>>cmin>>tmin>>a>>b>>c;
        int cumulative = a+b+c;
        if(a>=amin && b >=bmin && c >= cmin && cumulative  >= tmin)
        {
            std::cout<<"Yes\n";
        }
        else 
        {
            std::cout<<"No\n";
        }
    }
    return 0;
}
