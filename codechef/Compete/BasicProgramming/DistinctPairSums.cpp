#include<iostream>

int main ()
{
  int t;
  std::cin>>t;
  while(t--) 
  {
    int l,r;
    std::cin>>l>>r;
    std::cout<<2*(r-l)+1<<std::endl;
  }
}
