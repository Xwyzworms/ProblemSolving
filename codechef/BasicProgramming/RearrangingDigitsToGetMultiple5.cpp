#include<iostream>

int main()
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int d;
        std::string strRep;
        bool isExist {false} ;// 0 / 5
        std::cin>>d;
        std::cin>>strRep;
        for(int i = 0 ;i < strRep.size();i++) 
        {
            char temp=strRep[i];
            if(temp == '5' || temp == '0') isExist= true;
        }
        if(isExist) std::cout<<"Yes\n";
        else std::cout<<"No\n";
    }
    return 0;
}
