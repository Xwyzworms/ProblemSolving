#include <iostream>
#include <vector>
#include <sstream>



int solve(int nums)
{
  // Digital Root is the sum of all Digits of number, Continued until theres
  // Only one Digit Left
  int ans;
  std::string digits_str;
  std::stringstream strStream = std::stringstream();

  strStream << nums;

  strStream >> digits_str; 
  for(char str : digits_str) 
  {
      ans += (int)str - 48;
  }

  if(ans >= 10) 
  {
    std::string tmp;
    strStream.clear();

    strStream << ans;
    strStream >> tmp;
    
    int finAns;
    for(char str : tmp) 
    {
      finAns += (int)str - 48;
    }
    return finAns;
  }    
    return ans;
}


int main() 
{

  std::cout<<solve(563281);
  return 0;

}
