#include<iostream>

int main() 
{
    int panjang;
    int lebar;
    std::cin>>panjang;
    std::cin>>lebar;
    
    int area = panjang * lebar;
    int keliling = 2 * (panjang+lebar);

    if(area > keliling) 
    {
        std::cout<<"Area\n";
        std::cout<<area<<std::endl;
    }
    else if(area < keliling) 
    {
        std::cout<<"Peri\n";
        std::cout<<keliling<<std::endl;
    }
    else 
    {
        std::cout<<"Eq";
        std::cout<<keliling<<std::endl;
    }
    return 0;
}
