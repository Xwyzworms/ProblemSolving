#include<iostream>
#include<algorithm>
#include<vector>

bool isInSamRange(int start, int end, int value) 
{   
    if(value >= start && value <= end) 
    {
        return true;
    }
    else {

    return false;
    }
}

void solve( int s, int t,
            int a, int b,
            std::vector<int> apples, std::vector<int> oranges) 
{
    int counterApplesa {0};
    int counterOranges {0};
    
    for (int i : apples) 
    {
        if(isInSamRange(s, t, i+a)) 
        {
            counterApplesa ++;
        }
    }
    
    for (int  i : oranges)
    {
        if(isInSamRange(s, t, i+ b) == true) 
        {
            counterOranges ++;
        }

    }
    std::cout<<counterApplesa <<std::endl;
    std::cout<<counterOranges<<std::endl; 
}



int main() 
{
    int s =  7 ;
    int t = 10;
    int a =  4;
    int b = 12;
    std::vector<int> apples {2,3, -4};
    std::vector<int> oranges {3, -2, -4};
    solve(s, t, a, b, apples, oranges);
    
}



