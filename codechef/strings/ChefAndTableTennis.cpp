#include<iostream>

int main() 
{
  int t;
  std::cin>>t;
  while(t--) 
  {
    std::string s;
    std::cin>>s;
    int cnt_win {0}, cnt_lose {0};
    bool consecuntive = false; // True if the chef
    for(int i =0 ; i < s.size()-1 ; i++) 
    {
      if(s[i] =='1'&& s[i+1] == '1') 
      {
        if(!consecuntive) 
          consecuntive =  true;

      } 
      if
        (s[i] == '1') 
      {
        cnt_win++;
      }
    }
    
      if
        (s[s.size() - 1] == '1') 
      {
        cnt_win++;
      }

    if(cnt_win == s.size() - cnt_win ) 
    {
      if(consecuntive) std::cout<<"WIN\n";
      else std::cout<<"LOSE\n";
    }
    else 
    {
        if(cnt_win > s.size() - cnt_win) 
        {
          std::cout<<"WIN\n";
        }
        else 
        {
          std::cout<<"LOSE\n";
        }
    }
  }

  return 0;
}
