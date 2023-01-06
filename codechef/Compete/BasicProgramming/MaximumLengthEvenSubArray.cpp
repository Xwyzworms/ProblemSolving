#include<iostream>

int main ()
{
  int t;
  std::cin>>t;
  while(t--) 
  {
    int x;
    std::cin>>x;
    int ans = (x/2) + (x%2);
    if(ans % 2 ==0) 
    {
      std::cout<<x<<std::endl;
    }
    else 
    {
      std::cout<<x-1<<std::endl;
    }
  }
    return 0;
}
