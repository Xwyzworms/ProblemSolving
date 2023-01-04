#include<iostream>

int main ()
{
  int t;
  std::cin>>t;
  while(t--) 
  {
    int x,cnts=0,cumsum=0;
    std::cin>>x;
    for(int i = 1; i <=x;i++)
    {
      cumsum +=i;
      if(cumsum % 2 == 0) 
      {
        cnts++;
      }
    }
    if(x % 2 == 1) 
    {

      std::cout<<cnts + 1<<std::endl;
    }
    else {

      std::cout<<cnts + 2<<std::endl;
    }
  }

  return 0;
}
