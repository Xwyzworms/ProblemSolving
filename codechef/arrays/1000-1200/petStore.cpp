#include<iostream>


int main() 
{

    int t;
    std::cin>>t;
    while(t--) 
    {
        int n;
        std::cin>>n;
        int arrn[n];
        int arrn2[n];
    
        int arr1[102] = {0};
        int arr2[102] = {0};
            for(int i =0 ; i<n;i++)  
            {
                int temp;
                std::cin>>temp;
                if( i < n/2) 
                {
                    arrn[i] = temp;
                    arr1[arrn[i]]++;
                }
                else 
                {
                    arrn2[i] = temp;
                    arr2[arrn2[i]]++;
                }
            }
            bool ans = false;
            for(int i =0 ; i<n ;i++) 
            {
              if(arr1[i] != arr2[i]) 
                {
                  ans = false;
              }
              else {
                  ans = true;
              }

            }
            if(ans && n %2 ==0) std::cout<<"YES\n";
            else std::cout<<"NO\n";
        }
    return 0;

}
