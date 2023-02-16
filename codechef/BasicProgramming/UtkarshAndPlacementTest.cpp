#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        char a,b,c;
        char arr[3];
        std::cin>>arr[0]>>arr[1]>>arr[2];
        char offerring1,offerring2;
        int offerring1Indx, offerring2Indx;
        std::cin>>offerring1;
        std::cin>>offerring2;
        for(int i =0 ; i< sizeof(arr) / sizeof(arr[0]) ; i++) 
        {
            if(offerring1 == arr[i]) 
            {
                offerring1Indx = i;
            }
        
            if(offerring2 == arr[i])
            {
                offerring2Indx = i;
            }
        }
        if(offerring1Indx < offerring2Indx) 
        {
            std::cout<<arr[offerring1Indx]<<std::endl;
        }
        else 
        {
            std::cout<<arr[offerring2Indx]<<std::endl;
        }

    }
    return 0;
}
