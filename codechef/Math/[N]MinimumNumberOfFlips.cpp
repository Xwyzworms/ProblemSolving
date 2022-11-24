#include<iostream>
int main() 
{
    int t;
    std::cin>>t;
    while(t > 0 ) 
    {
        int n, cpN;
        std::cin>>n; 
        cpN = n;
        int ones {0};
        int minus {0};

        while(n > 0) 
        {
            int temp;
            std::cin>>temp;
            if(temp == 1) ones++;
            else minus++;            
            n--;
        }
        if(std::abs(ones - minus) == 0) std::cout<<0<<std::endl;
        else 
        {
                if(cpN % 2 == 0) {
                    int div = cpN / 2;
                    std::cout<<"HERE "<<div << " " << std::abs(ones - minus) <<std::endl;
                    int sum = std::abs(ones - minus);
                    std::cout<<std::abs(div - sum)<<std::endl;
                }
                else 
                {
                    std::cout<<-1<<std::endl;
                }

        }
        t--;
    }
    return 0;
}