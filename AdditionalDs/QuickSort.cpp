#include<iostream>
#include<climits>

void swapArr(int a[], int indx1, int indx2)  
{

    /// NOT WORKING RIP
    a[indx1] = a[indx1] + a[indx2];
    a[indx2] = a[indx1] - a[indx2];
    a[indx1] = a[indx1] - a[indx2];
}
int partition(int a[], int s, int e )
{
    int i = s;
    int pivot = a[e];
    for(int j=s; j<=e-1;j++) {
        if(a[j] < pivot) 
        {
            std::swap(a[i],a[j]);
            //swapArr(a,i,j);
            i++;
        }

    }
    std::swap(a[i],a[e]);
    //swapArr(a, i, e);
    return i;
}

void quickSort(int a[], int s, int e) 
{
    if(s>=e) 
    {
        return;
    }

    int partitionIndex = partition(a, s, e);

    quickSort(a, s, partitionIndex-1);
    quickSort(a, partitionIndex+1, e);
}

int main() 
{
    int a[] = {3, 7, 9, 8 ,2 ,2 ,};
    quickSort(a, 0 ,5);
    for(int i =0 ; i <=5 ; i++) 
    {
        std::cout<<a[i]<< " ";
    }
}