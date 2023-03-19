#include<iostream>

int main () 
{
  int t;
  std::cin>>t;
  while(t--) 
  {
    int n;
    std::cin>>n;
    std::string a,b;
    std::cin>>a>>b;
    
    int countA{0}, countB {0};

    // Loop invariant : 
    // a[i] == 1 || a[i] != 1
    for(int i = 0; i < n;i++) 
    {
      if(a[i] == '1') 
      {
        countA++;
      }
      if(b[i] == '1') 
      {
        countB++;
      }
    }

    if(countA == countB ) 
    {
      std::cout<<"YES\n";
    }
    else 
    {
      std::cout<<"NO\n";
    }
  }
  return 0;
}
