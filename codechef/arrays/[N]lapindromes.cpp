#include<iostream>
#include<string>
#include<vector>


std::string solve(std::string str) 
{
    int halfSize = str.size() / 2;
    int i {0};
    int j {0};
    bool arr[1000] {false};
    int sizeFinal = str.size();
    if(str.size() % 2 == 0)  
    {
        //even
        for(i = 0; i < halfSize; i++ ) 
        {
            int currentStr = str[i];
            arr[currentStr] = !arr[currentStr];
        }

        for(j = halfSize; j < str.size(); j++) 
        {
            int currentStr = str[j];
            arr[currentStr] = !arr[currentStr];
        }
    }

    else 
    {
        
        for(i = 0 ; i <= halfSize - 1; i ++) 
        {
            int currentStr = str[i];
            arr[currentStr] = !arr[currentStr];
        }

        for(j = halfSize + 1; j < str.size() ; j++) 
        {
            int currentStr = str[j];
            arr[currentStr] = !arr[currentStr];
        }
    
    }

    for(int x  = 0; x < sizeof(arr) / sizeof(arr[0]) ; x ++) 
    {
        if(arr[x]) return "No";
    }
    return "YES";
}


int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        std::string str ;
        std::cin>>str;
        std::cout<<solve(str)<<std::endl;
        t--;
    }
    return 0;

}