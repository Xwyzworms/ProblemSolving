#include<iostream>

int main() 
{
  int n = 10;
  int a[] = {1,2,3,4,5,6,7,8,9,10};
  int ptr1=0, ptr2=n-1;
  for(int i =0 ; i<n;i++) 
  {

    if(ptr1<=ptr2) 
    {
      std::swap(a[ptr1],a[ptr2]);
      ptr1++;
      ptr2--;
    }
    else 
    {
      break;
    }
  }
  for(int i=0;i<n;i++)
  {
    std::cout<<a[i]<<std::endl;
  }
  return 0;
}
