#include<iostream>

int main()
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int n, max{0};
        std::cin>>n;
        while(n > 0) 
        {
            int temp;
            std::cin>>temp;
            if(max < temp) max = temp;
            n--;
        }
        std::cout<<max<<std::endl;
        t--;
    }
    return 0;
}
