#include<iostream>


int main() 
{
  int t;
  std::cin>>t;
  while(t--) 
  {
    int n,s;
    std::cin>>n>>s;
    if(n>=s) std::cout<<s<<std::endl;
    else 
    {
        std::cout<<n-(s-n)<<std::endl;
    }
  }
  return 0;
}
