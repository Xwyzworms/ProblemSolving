#include<iostream>

int main() 
{

    int t;
    std::cin>>t;
    while(t--) 
    {
        int n,max =0;
        std::cin>>n;
        for(int i = 0; i < 4 ;i++)
        {
            int temp = 0;
            std::cin>>temp;
            if(max < temp ) 
            {
                max = temp;
            }
        }
        std::cout<<max<<std::endl;
    }
    return 0;
}
