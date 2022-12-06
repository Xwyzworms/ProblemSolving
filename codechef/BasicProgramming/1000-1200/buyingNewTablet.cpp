#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {

        int n,b,w{0},h{0},p{0},max_area{0};
        std::cin>>n>>b;
        while(n > 0) 
        {
            std::cin>>w>>h>>p;
            int area = w * h;
            if(p <= b && max_area < area) 
            {
                max_area = area;
            }

            n--;       
        }
        if(max_area == 0) std::cout<<"no tablet"<<std::endl;
        else std::cout<<max_area<<std::endl;

        t--;
    }
    return 0;
}
