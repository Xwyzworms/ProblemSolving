#include<iostream>

int main() 
{
  int t;
  std::cin>>t;
  while(t--) 
  {
    int n;
    std::cin>>n;
  
    std::string s;
    std::cin>>s;
    int cnt = 0;
    for(int i = 0 ; i < s.size()- 1 ; i++) 
    {
      if(s[i] == '1' && s[i+1] =='0') cnt++;
    }

    std::cout<<cnt<<std::endl;
    
  } 
  return 0;
}
