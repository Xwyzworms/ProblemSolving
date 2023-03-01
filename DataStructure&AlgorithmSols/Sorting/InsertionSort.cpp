#include<iostream>

void insertionSort(int a[], int n)
{
    for (int i = 1 ; i < n ; i ++) 
    {
        int j = i-1;
        while( j >= 0 && a[j] > a[j+1]  ) 
        {
            std::swap(a[j], a[j+1]);
            j--;
        }
    }
}

int main() 
{
    int n = 5;
    int arr[n] {32, 2, 22, 4, 4};
    insertionSort(arr,n);
    for(int i =0; i< n;i++) 
    {
        std::cout<<arr[i]<< " ";
    }
       
    return 0;
}