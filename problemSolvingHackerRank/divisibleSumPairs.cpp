#include<iostream>
#include<algorithm>
#include<vector>

int solve(int n, int k, std::vector<int> ar) 
{
    int ans {0};
    
    std::sort(ar.begin(), ar.end());
    for(int i = 0; i < n ; i++) 
    {
        for (int j =i+1; j < n; j++) 
        {
            if(i < j && ( ar[i] + ar[j] )% k == 0) {
                ans ++;
            }
        }
    }    
    return ans;

}

int main () 
{
    std::vector<int> kambing {1,2,3,4,5,6};
    int k = 5;
    int n = kambing.size();

    std::cout<<solve(n, k,kambing)<<std::endl;
}