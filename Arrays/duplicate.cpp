#include<iostream>

bool solve(int nums[]) 
{
  bool ans = false;
  bool ascii[125] ={false};
  for (size_t i=0 ; i < sizeof(nums)/ sizeof(bool); i++) 
  {

    if(ascii[nums[i]] == false)
    {
      ascii[nums[i]] =true;
    }
    else if(ascii[nums[i]] == true) 
    {
      return 1;
    }
  }
  return false;
}

int main()
{

  int arr[10] = {1,2,2,3,4,5,6,7,8};
  int arr2[10] = {1,2,10,3,4,5,6,7,8};
  std::cout<<solve(arr)<<std::endl;
  std::cout<<solve(arr2)<<std::endl;
  return 0;

}
