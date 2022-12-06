#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int a,b,c,d,e, cnt {0};
        std::cin>>a>>b>>c>>d>>e;
        if(a <= e && b+c <= d) cnt++;
        if(b <= e && a+c <= d) cnt++;
        if(c <= e && a+b <=d ) cnt++;

        if(cnt > 0) std::cout<<"YES"<<std::endl;
        else std::cout<<"NO"<<std::endl;
        t--;
    }
    return 0;
}
