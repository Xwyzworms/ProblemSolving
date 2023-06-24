#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x;
        std::cin>>x;
        if(x <=3 ) std::cout<<"bronze\n";
        else if(x > 3 && x <= 6) std::cout<<"silver\n";
        else 
        {
            std::cout<<"Gold\n";
        }
    }
    return 0;
}