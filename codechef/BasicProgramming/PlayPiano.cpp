#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        std::string inputs;
        std::cin>>inputs;
        bool flag {false};
        for(int i =0 ; i < inputs.size(); i+=2) 
        {
            if(inputs[i] == inputs[i+1]) 
            {
                flag = true;
                break;
            }
        }
        if(flag) 
        {
            std::cout<<"no\n";
        }
        else 
        {
            std::cout<<"yes\n";
        }
    }
    return 0;
}
