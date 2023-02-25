#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n;
        std::cin>>n;
        bool curState = true;
        std::string a;
        std::string b;
        std::cin>>a;
        std::cin>>b;
        // LoopInvariant
        for(int i = 0 ; i < a.size() ; i++) 
        {
            if(a[i] == '1')
            {
                curState = !curState;
            }

            if(b[i] == '1') 
            {
                curState = !curState;
            }
        }

        std::cout<<int(curState)<<std::endl;

    }
}
