#include<iostream>
#include<cmath>
int solve(int k) 
{
    int counter {0};

    int a = 1;
    int b = k-1;
    if(k == 1) return 0;
    else if( k > 1) 
    {
        for(int i = 1; i<k; i++) 
        {
            int sum = a + b;
            if(sum == k) counter ++;
            b--;
            a++;
        }
    }
    return counter;
}
int main() {

        int ka;
        std::cin>>ka;
        std::cout<<solve(ka)<<std::endl;
        return 0;
}