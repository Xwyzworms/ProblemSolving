#include<iostream>
#include<vector>

int solve(int n, int height) 
{
    int counter {0};
    for(int i = 0; i <n ; i++) 
    {
        int people;
        std::cin>>people;
        if(people > height) counter ++;
    }
    return counter; 
}


int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int n, height;
        std::cin>>n>>height;
        std::cout<<solve(n,height)<<std::endl;
        t--;
    }
    return 0;
}