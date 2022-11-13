#include <algorithm>
#include <iostream>
#include <vector>


int solve(std::vector<int> vect)
{
  int ans{0};
  bool isPeak = false;

  std::vector<int> listOfPeak;

  for (int i=1;i <= vect.size() -1 ; i++) 
  {
      int previous = -1;
      int next = -1;
      int current = vect[i];
      if(i == 0)
      {
        continue;
      }

      previous = vect[i-1];
      next = vect[i+1];

      if(previous < current && next < current) 
      {
         // Find The Right Bottom
        int valCurrentRight = current;
        int valCurrentLeft = current;
        while(valCurrentRight <=  ) 


         // Find the Left Bottom
         //
      }

  }


  return ans;
} 
int main() 
{

  return 0;
}
