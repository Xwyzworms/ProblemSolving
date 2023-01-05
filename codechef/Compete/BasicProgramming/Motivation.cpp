#include<iostream>

int main() 
{
  int t;
  std::cin>>t;
  while(t--) 
  {
    int n,x, max=0;
    std::cin>>n>>x;
    for(int i =0; i<n;i++)
    {
      int size,rate;
      std::cin>>size>>rate;
      if(rate > max && size <= x) 
      {
        max= rate;
      }
       
    }

    std::cout<<max<<std::endl;
  }
}
