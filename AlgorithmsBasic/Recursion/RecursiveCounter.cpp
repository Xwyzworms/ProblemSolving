#include <iostream>
#include <vector>

int counter(std::vector<int> arr) 
{
  if(arr.size() == 1) 
  {
    return 1;
  }
  else {
    std::vector<int> temp;
    for(auto i=1 ;i < arr.size(); i++)
    {
      temp.push_back(arr[i]);
    } 
    return 1 + counter(temp);
  }
}

int main () 
{
  std::vector<int> tes = {1, 2, 3, 4, 4, 1, 2, 5 ,3, 4}; //
  std::cout<<counter(tes)<<std::endl;
  return 0;

}
