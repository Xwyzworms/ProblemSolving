#include<iostream>
#include<algorithm>
#include<vector>

int solve(std::vector<int> keyboards, std::vector<int> drives, int b) 
{
    int temp {0};
    int max {-1};

    int j {0};
    for(int i = 0; j < keyboards.size() ; i++ ) 
    {
        temp = keyboards[j] + drives[i];
        if(temp > max  && temp <= b) 
        {
            max = temp;
        }

        if(i == drives.size() - 1) 
        {
            i = -1;
            j = j + 1;
        }
    }
    return max;
}

int main() 
{  
    std::vector<int> keyboards {40, 50, 60};
    std::vector<int> drives{5, 8, 12};
    int uang {60};

    std::cout<<solve(keyboards, drives, uang)<<std::endl;

}