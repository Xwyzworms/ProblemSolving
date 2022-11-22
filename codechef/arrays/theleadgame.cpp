#include<iostream>
#include<vector>

void solve(std::vector<int> p1, std::vector<int> p2) 
{
    bool p1Lead {false};
    bool p2Lead {false};
    int n1 {0};
    int n2 {0};
    int maxNum {-1};
    for(int indx = 0 ; indx < p1.size(); indx++) 
    {
         n1 += p1[indx];
         n2 += p2[indx];
        int diff = abs(n1 - n2);
        if(n1 > n2) 
        {
            if(maxNum < diff) {
                 maxNum = diff;
                 p1Lead =true;
                 p2Lead = false;
            }
        }
        else 
        {   
            if(maxNum < diff) 
            {
                maxNum = diff;
                p2Lead = true;
                p1Lead = false;
            }
        }
    }
        if(p1Lead) 
        {
            std::cout<<1<<" "<<maxNum<<std::endl;
        }
        else 
        {
            std::cout<<2<<" "<<maxNum<<std::endl;
        }
}

int main () 
{
    int t;
    std::vector<int> p1, p2;
    std::cin>>t;
    while(t > 0) 
    {
        int x1, x2;
        std::cin>>x1>>x2;
        p1.push_back(x1);
        p2.push_back(x2);
        t--;
    }
    solve(p1,p2);
    return 0;
}