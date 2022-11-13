#include<iostream>
#include<vector>
#include<algorithm>

std::vector<std::vector<int>> solve(std::vector<int> arr, int sum) 
{ 
  int n = arr.size();
  std::vector<std::vector<int>> ans;
  std::sort(arr.begin(), arr.end());

  // s = 7
  // get the A[i], nanti remaining nya di PairSum 
  // [1, 2, 3, 4, 5, 6, 8]
  // yang diambil nanti [1,2,3,4,5]
  // Nanti Pair Diakhirnya tinggal di sum aja 
  // Katakan lah 5, nanti bakalan di sum sama 6,8 kalau misalnya nggak total sum
  // Kalau misalnya ga sesuai dengan sum, maka ya bukan pair
  // 
  for(size_t i=0; i <= n - 3; i++) 
  {
      int ptrLeft = i + 1;
      int ptrRight = n - 1;

      while(ptrLeft < ptrRight) 
      {
          int cumSum = arr[i] + arr[ptrLeft] + arr[ptrRight];

          if(cumSum == sum) 
          {
            ans.push_back( {arr[i],arr[ptrLeft],arr[ptrRight]} );
            ptrLeft ++ ;
            ptrRight --;
          }
          else if(cumSum > sum) 
          {
            ptrRight -- ;
          }
          else 
          {
            ptrLeft ++;
          }

      }
  }

  return ans;

}


int main() 
{

  int s = 8;
  //std::vector<int> arr = {1,2,3,4,5,6,7,8,9,15}; 
  std::vector<int> arr = {1,2,3,4,5,6,8};
  std::vector<std::vector<int>> ans = solve(arr, s);

  for(std::vector<int> v : ans) 
  {
    for(auto result : v) 
    {
      std::cout<<result<<",";
    }
    std::cout<<std::endl;
  }
  return 0;
}
