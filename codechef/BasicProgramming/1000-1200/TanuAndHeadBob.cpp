#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n, cntY{0},cntI{0},cntN{0};
        std::cin>>n;
        for(int i= 0; i < n; i++) 
        {
            char temp;
            std::cin>>temp;
            if(temp == 'N') cntN++;
            else if (temp == 'I') cntI++;
            else if (temp == 'Y') cntY++;
        }
        if(cntI != 0 || cntY != 0) 
        {
            if(cntI > cntY) 
            {
                std::cout<<"INDIAN"<<std::endl;
            }
            else {
                std::cout<<"NOT INDIAN"<<std::endl;
            }
        }
        else 
        {
            std::cout<<"NOT SURE"<<std::endl;
        }
    }
    return 0;

}
