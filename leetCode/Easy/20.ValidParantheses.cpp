#include<iostream>

bool isValid(std::string s) {
  for(int i = 0; i < s.size() - 1 ;i+=2) 
  {
    std::cout<<int(s[i])<< " "<<int(s[i+1])<<std::endl;
    if(std::abs(int(s[i]) - int(s[i+1])) <= 2) return true;
  }
  return false;
}

int main() 
{
  return 0;
}
