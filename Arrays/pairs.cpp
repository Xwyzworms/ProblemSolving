#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
std::vector<int> solve(std::vector<int> arr, int sum) 
{
  std::vector<int> ans;
  for(size_t x : arr) 
  {
    int temp = x - sum;
    auto it = std::find(arr.begin(), arr.end(), abs(temp));
    auto it2 = std::find(arr.begin(), arr.end(), temp * -1);
    if(it != arr.end() || it2 != arr.end()) 
    {
      ans.push_back(x);
      if(it!= arr.end()) ans.push_back(temp);
      else ans.push_back(temp*-1);
      return ans;
    }
  }
  return ans;
}

std::vector<int> solveOptimized(std::vector<int> arr, int sum) 
{
  std::vector<int> ans;
  std::unordered_set<int> s;

  for(size_t x : arr) 
 {
   int y = sum - x;
    if( s.find(y) != s.end() )
    {
      ans.push_back(y);
      ans.push_back(x);
      return ans;
    }    
    s.insert(x);
 }
  return ans;
}


int main() 
{
  std::vector<int> arr = {10, 5, 2, 3, -6, 9, 11};
  int s = 4;

  std::vector<int> ans = solveOptimized(arr, s);

  for(int x : ans) 
  {
    std::cout<<x<<std::endl;
  }

  return 0;
}
