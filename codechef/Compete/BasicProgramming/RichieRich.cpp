#include<iostream>

int main() 
{

  int t;
  std::cin>>t;
  while(t--) 
  {
    int a,b,x;
    std::cin>>a>>b>>x;

    std::cout<<(b-a) / x<<std::endl; 
  }
  return 0;
}
