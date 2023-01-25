#include<iostream>

bool solve(int x) 
{
  if(x < 0 || (x % 10 == 0 && x != 0)) return false;
  int reverse {0};
  int xCopy = x;
  while(x > 0) 
  {
    int mod = x % 10;
    x/=10;
    reverse = reverse * 10 + mod;
  }
  if(reverse ==xCopy) return true;
  return false;
}
int main() 
{
  return 0;

}
