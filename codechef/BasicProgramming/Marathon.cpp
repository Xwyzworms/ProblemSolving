#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
         int D,d,A,B,C;
         std::cin>>D>>d>>A>>B>>C;
         int totalKmAchieved = d*D;
         if(totalKmAchieved < 10)
         {

             std::cout<<0<<std::endl;
         }
         else if(totalKmAchieved>= 10 && totalKmAchieved < 21) 
         {

             std::cout<<A<<std::endl;
         }
         else if(totalKmAchieved >= 21 && totalKmAchieved < 42) 
         {

             std::cout<<B<<std::endl; 
         } 
         else 
         {
             std::cout<<C<<std::endl;
         }
    }
    return 0;
}
