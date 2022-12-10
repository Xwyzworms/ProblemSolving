#include<iostream>
bool isPrime(int num)
{
    if(num == 1) return false;
    for(int i=2; i * i <= num; i++)
    {
        if(num % i == 0) return false;
    }
    return true;
}
int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int x1,x2;
        std::cin>>x1>>x2;
        for(x1; x1 <= x2 ; x1++) 
        {
            if(isPrime(x1)) std::cout<<x1<<std::endl;
        }
        t--;
    }
    return 0;
}

