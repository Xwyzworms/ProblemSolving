#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int k,p1,p2;
        std::cin>>p1>>p2>>k;
        int sum = p1 + p2;
        int turn = sum%(2*k);
        if(turn < k)  // 2 to represent the person !
       {
            std::cout<<"CHEF\n";
        }
        else 
        {
            std::cout<<"COOK\n";
        }
    }
    return 0;
}
