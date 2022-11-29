#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) {

        int x;
        std::cin>>x;
        int counter {0};
        // Do 100
        counter += x / 100;
        x %= 100;
        
        // If ada Sisa 50
        counter += x / 50;
        x %= 50;

        counter += x / 10;
        x %= 10;

        counter += x / 5 ;
        x %= 5;

        counter += x / 2;
        x %= 2;

        counter += x ;
        x %= 1;

        std::cout<<counter<<std::endl;

        t--;
    }
    return 0;
}
