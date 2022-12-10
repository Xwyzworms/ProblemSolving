#include<iostream>
#include<vector>
int main() 
{
    int workers ;
    std::cin>>workers;
    std::vector<int> vect ;
    int maxOne{100000}, maxTwo{100000}, maxThree{100000};
    while(workers > 0 )
    {
        int temp;
        std::cin>>temp;
        vect.push_back(temp);
        workers --;
    }
    for(int i = 0; i < vect.size() ; i++) 
    {
        int comIn;
        int currentValue = vect[i];
        std::cin>>comIn;
        if(comIn == 1) 
        {
            if(maxOne > currentValue) maxOne = currentValue;
        }
        else if(comIn == 2) 
        {
            if(maxTwo > currentValue) maxTwo = currentValue;
        }
        else 
        {
            if(maxThree > currentValue) maxThree = currentValue;
        }
    }
    if(maxOne + maxTwo < maxThree) std::cout<<maxOne+ maxTwo << std::endl;
    else std::cout<<maxThree<<std::endl;
    return 0;
}
