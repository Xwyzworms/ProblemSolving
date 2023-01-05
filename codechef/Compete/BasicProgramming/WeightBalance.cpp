#include<iostream>

int main () 
{
  int t;
  std::cin>>t;
  while(t--) 
  {
      int w1,w2,x1,x2, m;
      std::cin>>w1>>w2>>x1>>x2>>m;
    
      int abs_ = std::abs(w1-w2);
  
      if(abs_ >= x1*m && abs_ <=x2*m) std::cout<<1<<std::endl;
      else std::cout<<0<<std::endl;
      
  }
}
