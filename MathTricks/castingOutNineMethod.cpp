#include <iostream>
#include <sstream>
#include <string>
#include <unordered_set>
#include <vector>
#include <math.h>

std::string intToString(int num) 
{
  std::stringstream sstr = std::stringstream();
  std::string tempStr;
  sstr << num;
  sstr >> tempStr;

  sstr.clear();
  return tempStr;
}

void display(std::vector<std::vector<int>> vects) 
{
  for(std::vector<int> v : vects) 
  {
    if(v.empty()) continue; 
    for(int val : v) 
    {
      std::cout<<val;
    }
    std::cout<<std::endl;
  }

}

int solve(int nums) 
{
  int ans;
  int k = 9;
  std::vector<std::vector<int>> pairs;
  std::unordered_set<int> uns;
  std::string numStr = intToString(nums);
  pairs.resize(numStr.size()*2);
  for(int i =0 ; i < numStr.size(); ++i)
  {
    int curval = int(numStr[i]) - 48;
    int diff = k - curval;
    if(curval == k) 
    {
      pairs[i].push_back(curval);
      pairs[i].push_back(0);
    }
    else if(uns.find(diff) != uns.end() || uns.find(abs(diff)) != uns.end() ) 
    {
      pairs[i].push_back(curval);
      pairs[i].push_back(diff) ;

    }
    uns.insert(curval);
    
  

  }
  
    display(pairs);
    return ans;
}

int main() 
{

  solve(9743821);
  return 0;
}
