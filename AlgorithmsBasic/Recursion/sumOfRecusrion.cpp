#include <iostream>
#include <vector>
#include <algorithm>

int sum(std::vector<int> svec, int n) 
{

  if(n == 0) 
  {
    return svec[0];
  }
  else 
  {
    int temp = svec[n] + sum(svec, n-1);
    return temp;
  }

}

int main() 
{
  std::vector<int> sumOfStream {1, 2, 3, 4, 5, 10};
  std::cout<<sum(sumOfStream, sumOfStream.size() - 1)<<std::endl;
  return 0;
}
