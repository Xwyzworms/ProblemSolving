#include<iostream>
#include<set>
int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int sumAllNum[26];
        int sumCurrent {0};
        int summedUp = 0;
        for(int i =0 ; i < 26; i++) 
        {
            std::cin>>sumAllNum[i];
            summedUp += sumAllNum[i];
        }
        std::string str;
        std::set<char> oe;
        std::cin>>str;
        for(int o =0 ; o < str.length(); o++) 
        {
            oe.insert(str[o]);
        }
        for( auto it=oe.begin(); it != oe.end(); it++) 
        {
            sumCurrent += sumAllNum[*it-97];
        }
        std::cout<<std::abs(summedUp - sumCurrent)<<std::endl;

    }
    return 0;
}
