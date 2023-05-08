#include<iostream>
#include<climits>

/// @brief Ide besarnya adalah buat 2 array, array angka terbesar dari kiri ke kanan, dan kanan ke kiri
/// Sehabis itu tinggal lakukan summations saja . Algoritma complexity ==> O(N)
/// @param arr 
/// @param n 
/// @return 
int solve(int arr[], int n)  
{
    int arrLeftMax[n];
    int arr2RightMax[n];

    int j = n-1;
    int leftMax = arr[0];
    int rightMax = arr[j];
    // LOOP Invariant leftMax >= arrLeftMax[i-1] && rightMax >= arrRightMax[j-1]
    for(int i = 0; i < n ; i++) 
    {
        if(leftMax <= arr[i]) 
        {
            leftMax = arr[i];
        }
        
        if(rightMax <= arr[j]) 
        {
            rightMax = arr[j];
        }
        arrLeftMax[i] = leftMax;
        arr2RightMax[j] = rightMax;
        j--;
    }
    int ans=0;
    // Loop Invariant 
    // Ans Increment ketika i-1, nilai increment berdasarkan hasil penjumlahan 
    for(int i =0 ; i<n;i++) 
    {
        ans += std::min(arrLeftMax[i], arr2RightMax[i]) - arr[i];
    }
    return ans;
}
int main() 
{
    int arr[] = {0,1,0,2,1,0,1,3,2,1,2,1};
    std::cout<<solve(arr,12)<<std::endl;
    return 0;
}