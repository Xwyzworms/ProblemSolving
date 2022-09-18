#include <iostream>
#include <vector>
#include <math.h>

int findMax(std::vector<int> vect, int n) 
{
  if(n == 1) 
  {
    return vect[0];
  }
  else 
  {
    return std::max(vect[n], findMax(vect, n-1));
  }
}


int main() 
{
  std::vector<int> vec {102,3,20,-20, 5, 5, 10,104};
  std::cout<<findMax(vec, vec.size())<<std::endl;
  return 0;
}
