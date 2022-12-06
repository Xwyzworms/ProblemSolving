#include<iostream>
#include<vector>

int main() 
{
    int t;
    std::cin>>t;
    while( t > 0 ) 
    {
        int n, max{0}, ncopy;
        std::vector<int> vec;
        std::cin>>n;
        ncopy = n;
        while(n > 0) 
        {
            int temp;
            std::cin>>temp;
            vec.push_back(temp);
            n--;
        }
        for(int i = 0; i < vec.size(); i ++) 
        {
            int nums_counter {1};
            for(int j = i+1; j < vec.size()  ; j ++) 
            {
                if(vec[i]  == vec[j]) 
                {
                    nums_counter++;
                    if(max < nums_counter) 
                    {
                        max = nums_counter;
                    }
                }
            }
        }
        if(max == 0) 
        {
            std::cout<<ncopy - 1<<std::endl;
        }
        else std::cout<<std::abs(max - ncopy)<<std::endl;

        t--;   
    }
    return 0;
}
