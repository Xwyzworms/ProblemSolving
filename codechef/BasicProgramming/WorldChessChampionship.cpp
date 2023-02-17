#include<iostream>
#include<cmath>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int x;
        std::cin>>x;
        
        std::string str;
        std::cin>>str;
        int ansWin{0},ansLose{0};
        for(int i=0 ; i <str.size(); i++) 
        {
            char c = str[i];
            if(c == 'C') 
            {
                ansWin+=2;
                ansLose+=0;
            }
            else if(c =='D') 
            {
                ansWin +=1;
                ansLose +=1;
            }
            else {
                ansLose +=2;
            }
        }
        if(ansWin > ansLose) 
        {
            std::cout<<60*x<<std::endl;
        }

        else if(ansWin == ansLose ) 
        {
            std::cout<<55*x<<std::endl;
        }
        else 
        {
            std::cout<<40*x<<std::endl;
        }
        
    }
    return 0;
}
