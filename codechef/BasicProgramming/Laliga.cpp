#include<iostream>

int main() 
{

    int t;
    std::cin>>t;
    while(t--) 
    {
        int n = 4;
        int a[n];
        for(int i =0 ; i < n; i++) 
        {
            std::string _unused;
            int inputs ;
            std::cin>>_unused>>inputs;
            if(_unused =="Barcelona") 
            {
                a[0] = inputs;
            }
            else if(_unused == "Malaga") 
            {
                a[1] = inputs;
            }
            else if(_unused == "RealMadrid")
            {
                a[2] = inputs;
            }
            else 
            {
                a[3] = inputs;

            }
        }

        if(a[0] > a[3] && a[1] > a[2]) 
        {
            std::cout<<"Barcelona\n";
        }
        else 
        {
            std::cout<<"RealMadrid\n";
        }
    }
    return 0;
}

