#include<iostream>
#include<string>
int main() 
{
  int t;
  std::cin>>t;
  while(t --) 
  {
    std::string s,t, ans;
    std::cin>>s;
    std::cin>>t;
    for(int i = 0; i < s.length() ; i++) 
    {
      if(s[i] == t[i]) 
      {
        ans.append("G");
      }
      else {
        ans.append("B");
      }
    }
    std::cout<<ans<<std::endl;
  } 
  return 0;
}


