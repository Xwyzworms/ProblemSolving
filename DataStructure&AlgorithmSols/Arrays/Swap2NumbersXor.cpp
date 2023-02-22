#include<iostream>

int main() 
{
  int a=14;
  int b=5;
  int swapA = a^a^b;
  int swapB = a^b^b;
  std::cout<<"BeforeSwap "<< a<< " " << b<<std::endl;
  std::cout<<"afterSwap"<<swapA<<" "<<swapB<<std::endl;
  return 0;
}
