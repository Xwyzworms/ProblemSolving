#include<iostream>

int solve(int n) 
{
    int arr[n];
    int indx {0};
    int counter {0};
    while(n > 0) 
    {
        std::cin>>arr[indx];
        indx ++;
        n--;
    }

    for(auto a : arr) 
    {
        if(a >= 10 && a  <= 60)counter++;
    }

    return counter;

}

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int n;
        std::cin>>n;
        std::cout<<solve(n)<<std::endl;
        t--;
    }
    return 0;
}