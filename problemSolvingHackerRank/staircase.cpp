#include<iostream>
#include<vector>

void solve(int n) 
{
    for(int i=n-1;i >= 0; i--)         
    {
        for(int z = i ; z > 0; z--) 
        {
            std::cout<<" ";
        }
        for (int j = n-i; j > 0 ; j--) 
        {
            std::cout<<"#";
        }
            std::cout<<" "<<std::endl;
    }
}

int main () 
{
    solve(4);
}