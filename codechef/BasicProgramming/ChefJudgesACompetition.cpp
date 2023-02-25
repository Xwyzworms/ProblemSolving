#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n;
        std::cin>>n;

        int a[n],b[n], maxA = 0, maxB = 0;
        
        for(int i =0 ; i < n ; i++) 
        {
            std::cin>>a[i];
            if(maxA < a[i]) 
            {
                maxA = a[i];
            }
        }
        // LoopInvariant 
        // b[maxB] <= a[0..i]
        for(int i =0 ; i < n ; i++) 
        {
            std::cin>>b[i];
            if(maxB < b[i]) 
            {
                maxB = b[i];
            }
        } 

        int sumA {0}, sumB = 0;
        for(int i =0 ;i < n ; i++) 
        {
             sumA += a[i];
             sumB += b[i];
        }

        if(sumA - maxA < sumB -maxB)
        {
            std::cout<<"Alice\n";
        }
        else if(sumA - maxA > sumB - maxB)
        {
            std::cout<<"Bob\n";
        }
        else 
        {
            std::cout<<"Draw\n";
        }



    }
    return 0;
}
