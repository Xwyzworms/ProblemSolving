#include<iostream>

int main () 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n,mul = 1;
        std::cin>>n;
        bool dudeItsContaintheEven = false;
        for(int i =0 ; i< n ; i++) 
        {

            int x;
            std::cin >> x;
            if(x % 2==0) dudeItsContaintheEven = true;

        }
        
        if(!dudeItsContaintheEven)
        {
            std::cout<<"YES"<<std::endl;
        }
        else 
        {
            std::cout<<"NO\n";
        }
    }

    return 0;

}
