#include<iostream>

void mergeArrays(int x[], int y[], int a[], int s, int e) 
{
    int mid = (s+e)/ 2;
    int i = s;
    int k = s;
    int j = mid+1;

    while(i <= mid && j <= e) 
    {
        if(x[i] < y[j]) 
        {
            a[k] = x[i];
            k++;
            i++;
        }
        else 
        {
            a[k] = y[j];
            j++;
            k++;
        }
    }   

    // Kondisi out When i> mid || j > e 
    // Since K harusnya udah di tempat t
    while(i<=mid) 
    {
        a[k] =x[i];
        k++;
        i++;
    } 

    while(j <= e) 
    {
        a[k] = y[j];
        k++;
        i++;
    }
}

void mergeSort(int a[], int s, int e) 
{
    if(s >= e) 
    {
        return ;
    }

    int x[100];
    int y[100];
    int mid = (s+e)/2;

    for(int i =0 ; i <= mid; i++) 
    {
        x[i] = a[i]; // Put some information in there 
    }

    for(int i = mid +1 ; i <=e ; i++) 
    {
        y[i] = a[i];
    }

    mergeSort(x, s, mid);
    mergeSort(y, mid+1, e); // Assume semua sudah tersorting, lakukan merging

    mergeArrays(x, y, a, s, e );

}

int main() 
{
    int a[] = {7, 3, 1, 5, 2};
    mergeSort(a, 0, 4);
    for(int i =0 ; i < 5;i++)
    {
        std::cout<<a[i]<<std::endl;
    }
    return 0;
}