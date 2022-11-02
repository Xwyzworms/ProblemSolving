#include<iostream>
#include<vector>


void solve(std::vector<int> bill, int k, int b)
{
    int bCharged {0};
    for (int i = 0 ; i < bill.size() ; i ++) 
    {
        if(i != k) 
        {
            bCharged += bill[i];       
        }
    }
    bCharged = bCharged / 2;

    if(bCharged - b == 0 )
    {
        std::cout<<"Bon Appetit"<<std::endl;
    }
    else {
        std::cout<<abs(bCharged - b)<<std::endl;
    }

}
int main() 
{
    int k = 1;
    int b = 7;
    std::vector<int> bill {3, 10, 2, 9};
    solve(bill, k, b);
    return 0;
}