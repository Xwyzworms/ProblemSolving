#include<iostream>
#include<vector>
int solve(int n, int k) 
{   
    std::vector<int> pb ;
    int tempN = n;
    while(n > 0) 

    {
        int temp {0};
        std::cin>>temp;
        pb.push_back(temp);
        n--;
    }

    int maxGirls {0};
    int sum {0};
    for(int  i =0 ; i <= tempN - k ; i++){
        sum = 0;
        for(int j = i ; j < ( k + i); j++) 
        {
            sum+=pb[j];
        }
        if(maxGirls < sum) 
        {
            maxGirls = sum;
        }
    }
    return maxGirls;
}

int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int p1,p2;
        std::cin>>p1>>p2;
        std::cout<<solve(p1,p2)<<std::endl;
        t--;
    }
    return 0;
}