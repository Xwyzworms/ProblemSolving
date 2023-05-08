#include<iostream>
#include<vector>
#include<climits>

int solve(std::vector<int> arr) 
{
    int n = arr.size();
    int largest = INT_MIN;
    for(int i = 1; i < n - 1;)
    {
        if(arr[i] > arr[i-1] && arr[i] > arr[i+1]) 
        {
            int counter = 1;
            int iterator=i;
            // Go left
            while(arr[iterator] > arr[iterator-1] && iterator>=1) 
            {
                counter ++;
                iterator --;
            }
            // Go right
            while(arr[i] > arr[i+1] && i < n-1 ) 
            {
                counter++;
                i++;
            }
            largest = std::max(largest, counter);
        }
        else 
        {
            i++;
        }


    }
    return largest;
    
}

int main() 
{
    std::vector<int> arr = {5, 6, 1, 2, 3, 4, 5, 4, 3, 2, 0, 1, 2, 3, -2, 4};
    std::cout<<solve(arr)<<std::endl;
    return 0;
}