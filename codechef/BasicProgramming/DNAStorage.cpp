#include<iostream>

int main () 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n;
        std::cin>>n;
        std::string str;
        std::cin>>str;
        for(int i =0 ;i < n;i+=2) 
        {
            std::string signature;
            char s1 = str[i];
            char s2 = str[i+1];
            signature +=s1;
            signature +=s2;
            if(signature == "00") std::cout<<"A";
            else if(signature == "01") std::cout<<"T";
            else if(signature == "10") std::cout<<"C";
            else std::cout<<"G";

        }
        std::cout<<std::endl;
    }
    return 0;
}
