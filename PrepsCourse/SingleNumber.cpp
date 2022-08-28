#include <iostream>
// Can't use Hashmap
// Linear time

int solve(int arr[]) 
{
    int ascii[128] = {false};
    int ascii2[128] = {false};

    for (int i =0 ; i <= sizeof(arr)/ sizeof(int); i ++) 
    {
        int val = arr[i];
        if(ascii[val] == true) 
        {
            ascii2[val] = true;
        }
        ascii[val] = true;
    }

    for(int i = 0 ; i <= sizeof(arr)/sizeof(int); i ++) 
    {
        int val = arr[i];

        if(ascii2[val] == false) 
        {
            return arr[i];
        }
    }
    return 0;
}

int main () 
{
    int testcase1[] = {2,2,1};
    int testcase2[] = {4,1,2,1,2};
    std::cout<<solve(testcase1)<<std::endl;
    std::cout<<solve(testcase2)<<std::endl;
    return 0;
}