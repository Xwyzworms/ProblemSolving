#include<iostream>

int main() 
{


    int n;
    while(std::cin>>n) 
    {

        int changed = n/2 + n/3 + n/4;
        if(changed>n) 
        {
            std::cout<<changed<<std::endl;
        }
        else 
        {
            std::cout<<n<<std::endl;
        }
    }

    return 0;
}
