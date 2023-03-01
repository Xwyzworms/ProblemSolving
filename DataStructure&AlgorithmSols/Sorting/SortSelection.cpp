#include<iostream>
#include<vector>
#include<algorithm>
void selectionSort(int a[], int n) 
{
    // Loop Invariant
    for(int i =0 ; i < n-1 ; i++) 
    {
        int smallest = i;
        // Loop invariant in here
        for(int j = i+1; j < n; j++) 
        {
            if(a[j] < a[smallest]) 
            {
                smallest = j;
            }
        }
        if(a[i] > a[smallest]) 
        {
            std::swap(a[i], a[smallest]);
        }
    }   
}

int main() 
{
    int n = 10;
    int a[n] {2,3,41,202,12,
              122,1,3,2,2};
    selectionSort(a, n);

    for(int i = 0 ; i < n ; i++ )
    {
        std::cout<<a[i]<<" ";
    }

}