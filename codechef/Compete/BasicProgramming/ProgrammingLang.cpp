#include<iostream>

int main() 
{

  int t;
  std::cin>>t;
  while(t--) 
  {
    int a,b,a1,b1,a2,b2;
    std::cin>>a>>b>>a1>>b1>>a2>>b2;
    
    if((a==a1 || a==b1) && (b==a1 || b==b1)) 
    {
      std::cout<<"1\n";
    }
    else if((a==b2||a==a2) && (b==a2 || b==b2))
    {
      std::cout<<"2\n";
    }
    else 
    {
      std::cout<<"0\n";
    }

  }
  return 0;
}
