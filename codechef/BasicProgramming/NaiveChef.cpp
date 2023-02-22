#include<iostream>
#include<iomanip>


int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n,a,b;
        std::cin>>n>>a>>b; 
        float cnt_a = 0;
        float cnt_b = 0;
        for(int i =0 ; i < n ; i++) 
        {
            float temp;
            std::cin>>temp;
            if(temp == a ) cnt_a ++;

            if(temp == b) { cnt_b ++;}

        }
        std::cout<<std::fixed<<std::setprecision(13)<<(cnt_a/n) * (cnt_b/n)<<std::endl;

    }
    return 0;
}
