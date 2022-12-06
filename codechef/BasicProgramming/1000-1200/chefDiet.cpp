#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int n, k, sum{0}, cnt{0};
        bool exactly {true};
        std::cin>>n>>k;
        int a[n];
        int j  = 0;
        while(n > 0) 
        {
            int temp;
            std::cin>>temp;
            a[j] = temp;
            j++;
            n--;
        }
        for (int i =0 ; i < sizeof(a) / sizeof(a[0]); i ++)
        {
            int temp = a[i];
            sum += temp;
            cnt++;
            if(sum - k >=0) 
            {
                sum -= k;
            }
            else 
            {
                exactly = false;
                break;
            }
        }
        if(exactly) std::cout<<"YES"<<std::endl;
        else std::cout<<"NO "<<cnt<<std::endl;
        t--;
    }
    return 0;
}
