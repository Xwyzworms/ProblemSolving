#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>


int solve(int n)
{
    int shared { 5};
    int cum = 0;
    while(n != 0) {
        int liked = floor(shared / 2);
        shared = liked * 3;
        cum = cum + liked;
        n --;
    }
    return cum;

}


int main() 
{
    int dayofReport {5};
    std::cout<<solve(5)<<std::endl;
    return 0;
}