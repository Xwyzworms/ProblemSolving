#include<iostream>
#include<string>

int main () 
{
 
  int t;
  std::cin>>t;
  while(t--) 
  {
    int n;
    bool ans = false;
    std::cin>>n;
    std::string str;
    std::cin>>str;
    
    for(int i = 0 ; i < n/2; i++) 
    {
      if(str[i] != str[ n/2 + i])  {
        ans = true;
        break;
      }

    }
    if(ans) std::cout<<"NO"<<std::endl;
    else std::cout<<"YES"<<std::endl;
  }
  

  return 0;
}

