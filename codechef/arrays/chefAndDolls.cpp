#include<iostream>
#include<vector>
double solve(double n) 
{
    std::vector<int> ans;
    bool ancestor[100000] {false};
    while(n > 0) 
    {
        double temp;
        std::cin>>temp;
        ans.push_back(temp);
        n--;
    }   
    double tempAns {0};
    for(int i = 0; i < ans.size() ; i++) 
    {
        ancestor[ans[i]] = !ancestor[ans[i]];
    }

    for(int i =0 ; i<ans.size() ; i++) 
    {
        int temp = ans[i];
        if(ancestor[temp]) tempAns = temp; 
    }
    return tempAns ;
}

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        double n;
        std::cin>>n;
        std::cout<<solve(n)<<std::endl;
        t--;
    }
    return 0;
}