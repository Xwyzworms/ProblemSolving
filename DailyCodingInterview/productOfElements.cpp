#include <iostream>
#include <vector>
#include <algorithm>



std::vector<int> solve(std::vector<int> nums)
{
  std::vector<int> prefix_products;
  std::vector<int> suffix_products;
  std::vector<int> result;
  for(size_t i = 0; i < nums.size(); i++ ) 
  {
    if(prefix_products.empty()) 
    {
      prefix_products.push_back(nums[i]);
    }
    int last = prefix_products[prefix_products.size() - 1];
    prefix_products.push_back(last * nums[i]);
  }
  
  std::reverse(nums.begin(), nums.end());

  for(size_t i = 0 ; i < nums.size() ; i ++) 
  {
    if(suffix_products.empty())  
    {
      suffix_products.push_back(nums[i]);
    } 
    else 
    {

    int last = suffix_products[suffix_products.size() - 1];
    suffix_products.push_back(last * nums[i]);

    }
  }

  for(size_t i = 0; i < nums.size(); i++) 
  {
    

  }
  return ans;
  
}

int main() 
{

  return 0;
}
