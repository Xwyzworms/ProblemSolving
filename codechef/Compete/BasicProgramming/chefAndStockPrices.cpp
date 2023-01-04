#include<iostream>

int main() 
{
  int t;
  std::cin>>t;
  while(t--) 
  {
   float s,a,b,c;
   std::cin>>s>>a>>b>>c;

   s = s + (c*s)/100;
   if(s>=a && s<=b) 
   {
     std::cout<<"Yes\n";
   }
   else {
     std::cout<<"No\n";
   }


  }
  return 0;
}
