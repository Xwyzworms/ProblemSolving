#include<iostream>
#include<vector>


int hcf(int x, int y) 
{
    /*
     * Find the Greates Divisor
     */ 
    if( y== 0) 
    {
        return x;
    }

    else
    {
        return hcf (y, x % y);
    } 

}

int main () 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n, i ,val,a[100];
        std::cin>>n;
        for(i = 0 ; i<n ; i++)
        {
            std::cin>>a[i];
        }   
        val = a[0];
        for(i = 0 ; i < n; i++)  
        {
            val = hcf(val, a[i]);
        }
        for(i = 0; i < n; i++)
        {
            std::cout<<a[i] / val<<" ";
        }
        std::cout<<std::endl;
    }
}
