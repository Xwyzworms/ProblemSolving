#include<iostream>

int main() 
{
  int t;
  std::cin>>t;
  while(t--) 
  {
    int n, a,b,c;
    std::cin>>n>>a>>b>>c;
    if(a+c>=n && b>=n) std::cout<<"YES\n";
    else std::cout<<"NO\n";
  }
  return 0;
}


