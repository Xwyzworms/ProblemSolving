#include<iostream>


int main() 
{

  int t;
  std::cin>>t;
  while(t--) 
  {
    std::string task;
    std::cin>>task;
    int cnt =0; 
    char current;
    for(int i = 0; i<task.length() ; i++) 
    {
      current = task[i];
      if(current == 'a' || current == 'i' || current =='e' || current =='o' || current =='u') 
      {
        cnt +=1;
        if(cnt > 2) break;
      }
      else {
        cnt =0;
      }
    }

    if(cnt > 2 ) std::cout<<"happy"<<std::endl;
    else std::cout<<"sad"<<std::endl;

  }


  return 0;
}
