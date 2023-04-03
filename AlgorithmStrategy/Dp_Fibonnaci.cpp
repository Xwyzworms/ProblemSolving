#include<iostream>
#include<cstring>
int fibDp(int n, int* arr) 
{
    if(n == 0 ) 
        return 0 ;
    if ( n == 1) 
    {
        return 1;
    }

    // Do some check before calculating it again
    if(arr[n] != 0) 
    {
        return arr[n];
    }
    
    int output = fibDp(n - 1, arr) + fibDp(n-2, arr);
    arr[n] = output;
    return output;    

}


int fibAnother(int n) 
{
    // Do it iterativelys
    int* arr = new int(n+1);
    arr[0] = 0;
    arr[1] = 1;
    for(int i = 2 ; i <= n ;i++) 
    {
        arr[i] = arr[i-1] + arr[i-2];
    }

    int output = arr[n];
    return output;
}

int main() 
{
    int n = 8;
    int *arr = new int(n+1);
    std::memset(arr, 0, n* sizeof(int));
    std::cout<<fibDp(7, arr)<<std::endl;
    std::cout<<fibAnother(7)<<std::endl;
    return 0;
}