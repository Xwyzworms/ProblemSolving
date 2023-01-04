#include<iostream>

int main() 
{
  int t;
  std::cin>>t;
  while(t--) 
  {
    int d,l,r,days;
    std::cin>>d>>l>>r;
    if(d>=l && d <=r) 
    {
      std::cout<<"Take second dose now\n";
    }
    else if(d > r) 
    {
      std::cout<<"Too Late\n";
    }
    else 
    {
      std::cout<<"Too Early\n";
    }
  }
  return 0;
}
