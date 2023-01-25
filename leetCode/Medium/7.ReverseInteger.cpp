#include<iostream>

int solve(int x) 
{
  int ans = 0;
  bool minusVar{false};
  if(x > INT_MIN && x < 0) 
  {
    x = -1 * x;
    minusVar = true;
  }
  while(x > 0 )
  {
    int modulo = x % 10;
    x /= 10;
    if(ans > INT_MAX/10 || (ans == INT_MAX / 10 && modulo > 7)) return 0;
    if(ans <  INT_MIN / 10 || (ans == INT_MIN / 10 && modulo < -8)) return 0;
    ans = ans * 10 + modulo ; 
  }
  if(minusVar) return -1 *ans;
  return ans;
}

int main() 
{

  return 0;
}
