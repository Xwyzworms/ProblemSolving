#include<iostream>

int main () 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n;
        std::cin>>n;
        bool a[8] = {false};
        for(int i =0 ; i<n;i++) 
        {
            std::string str;
            std::cin>>str;
            if(str == "easy") 
            {
                a[1] = true;
            }
            else if(str == "medium")  a[2] = true;
            else if(str == "medium-hard")  a[3] = true;
            else if(str == "simple") a[4] =true;
            else if(str == "cakewalk") a[5] = true;
            else if(str =="hard") a[6] = true;
            else if(str =="easy-medium") a[7] = true;
        }
            
        if(a[1] == true && a[5] == true && a[4] == true && (
                    a[7] == true || a[2] == true
                    ) && (a[6] == true || a[3] == true)) 
        {
            std::cout<<"Yes\n";
        }
        else 
        {
            std::cout<<"No\n";
        }
    }
    
}
