#include<iostream>
#include<set>
int solve(int arr[], int s, int n) 
{

    //Prim solution
    std::set<int> setme ;

    for(int i =0 ; i < n ; i++ ) 
    {
        setme.insert(arr[i]);
    }

    for(int i = 0; i< n; i++) 
    {
        int diff = arr[i] - s;
        if(setme.find(diff) != setme.end() || setme.find(-diff) != setme.end())
        {
            std::cout<<"Find the element"<<std::endl;
            std::cout<<diff<< " "<<arr[i]<<std::endl;
            return 0;
        }
    }
    return -1;
}
int main() 
{
    int n = 7;
    int arr[] {10,5,2,3,-6,9,11};
    solve(arr, 4, n);
    return 0;
}