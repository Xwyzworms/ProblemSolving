#include<iostream>

int main() 
{
  int n = 5;
  int arr1[5] = {10,29,12,32,1};
  int arr2[n];
  
  int j =0;
  for(int i=n-1; i>=0 ;i--)
  {
    arr2[j] = arr1[i] ;
    j++;
  }
  for(int i =0;i<n;i++)
  {
    std::cout<<arr2[i]<<std::endl;
  }
  return 0;
}
