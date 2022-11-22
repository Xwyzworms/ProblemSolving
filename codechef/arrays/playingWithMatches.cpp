#include<iostream>

int returnParse(int l) 
{
    int ans{0};

    if(l == 0) return 6;
    else if(l == 1) return 2;
    else if(l ==2) return 5;
    else if(l==3) return 5;
    else if(l==4) return 4;
    else if(l==5) return 5;
    else if(l ==6)return 6;
    else if (l==7) return 3;
    else if (l==8) return 7;
    else return 6;
}
int solve(int p1, int p2) 
{

    int ans {0};
    int sum = p1 + p2;
    while(sum > 0) 
    {
        int modulo = sum % 10;
        ans += returnParse(modulo);

        sum = sum / 10;
    }
    return ans;

}

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int p1,p2;
        std::cin>>p1>>p2;
        std::cout<<solve(p1,p2)<<std::endl;
        t--;
    }
    return 0;
}