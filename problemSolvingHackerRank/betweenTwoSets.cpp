#include<iostream>
#include<vector>
#include<algorithm>
/* 
    Ini Tinggal Masalah yang factor B nya aja

*/
std::vector<int> getTheFactors(int n) 
{
    std::vector<int> ans;
    for(int i = 1 ; i <= n ; i ++) 
    {
        if(n % i == 0) ans.push_back(i);
    }   

    return ans;
}

bool isFactorBOkay() 
{
    
}
int solve(std::vector<int> a, std::vector<int> b) 
{   
    int ans {0};
    for(auto xx :  b  ) 
    {
        std::vector<int> temp  = getTheFactors(xx);
        std::vector<int>::iterator it = std::find(temp.begin(), temp.end(), xx);
        if(it != temp.end()) ans++;
    }

    return ans;

}
int main () 
{
    std::vector<int> a {1,};
    std::vector<int> b {72, 48};
    std::cout<<solve(a,b)<<std::endl;
    return 0;
}