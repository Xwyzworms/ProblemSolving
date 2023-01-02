#include<iostream>

int main () 
{
  int t;
  std::cin>>t;
  int a[t], b[t];
  while(t--) 
  {
    std::string x;
        std::cin>>x;
        bool  palindrome = true;
        for(int i = 0 ; i<x.length() ;i++) 
        {
          a[i] = x[i];
          b[x.length() -1 -i] = a[i];
        }

        for(int i=0;i<x.length();i++) 
        {
          if(a[i] != b[i]) 
          {
             palindrome =false;
          }
        }
        if(palindrome) 
        {
          std::cout<<"wins"<<std::endl;
        }
        else 
        {
          std::cout<<"loses"<<std::endl;
        }
      

  }
  return 0;
}
