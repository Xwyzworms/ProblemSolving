#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>


int solve(std::vector<int> a) 
{
    int max {-1};
    std::sort(a.begin(), a.end());

    int ptr1 {a[0]};
    int ptr2 {a[0]};

    int j = 1;
    int io = 0;
    while(j < a.size())
    {
        ptr1 = a[io];
        ptr2 = a[j];

        if(abs(ptr1 - ptr2) <=1 ) 
        {
           max = std::max(max, (j - io) + 1);
           ++j;
           continue;
        };
        io++;
    }
    return max;
}

int main() 
{

    std::vector<int> a {1, 1, 2, 2, 2, 3};
    std::vector<int> b {4, 6, 5, 3, 3, 1};
    std::cout<<solve(a)<<std::endl;
    return 0;
}