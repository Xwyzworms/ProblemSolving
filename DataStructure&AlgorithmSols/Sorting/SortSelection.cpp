#include<iostream>
#include<vector>


int findMin(std::vector<int> arr) 
{
    int n = arr.size()-1;
    int i = n;
    int min = 0;

    // LoopInvariant
    // a[min] <= A[0..i-1]
    while(i > 0) 
    {
        if(arr[i] < arr[min] ) 
        {
            min = i;
        }
        i = i -1;
    }
    return min;
}

std::vector<int> selectionSort(std::vector<int> arr) 
{   
    int i =arr.size() -1;
    while(i > 1) 
    {
        int minIndex = findMin(arr);
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;

        i -= 1;
    }
    return arr;
}


int main() 
{
    std::vector<int> sa = {9,6,7,3,4};
    for(auto a : selectionSort(sa))
    {
        std::cout<<a<<std::endl;
    }
       
}