#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        float hardness, cc, tensile, cnt=0;
        bool ans[3] {false};
        std::cin>>hardness>>cc>>tensile;
        if(hardness > 50) ans[0] = true;
        if(cc < 0.7) ans[1] = true;
        if(tensile > 5600) ans[2] = true;

        for(int i =0 ; i < 3; i++) 
        {
            if(ans[i]) cnt++;
        }

        if(cnt == 3) std::cout<<10<<std::endl;
        else if(ans[0] && ans[1] ) std::cout<<9<<std::endl;
        else if(ans[1] && ans[2] ) std::cout<<8<<std::endl;
        else if(ans[0] && ans[2]) std::cout<<7<<std::endl;
        else if(cnt == 1) std::cout<<6<<std::endl;
        else std::cout<<5<<std::endl;
    }
    return 0;
}
