#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        std::string a;
        std::cin>>a;
        int count1{0}, count2{0};
        for(int i =0 ; i <a.size(); i++) 
        {
            if(a[i] =='a') count1++;
            else count2++;

        }

        if(count1>count2)
        {
            std::cout<<count2<<std::endl;
        }
        else 
        {
            std::cout<<count1<<std::endl;
        }
    }   
    
     

    return 0;
}
