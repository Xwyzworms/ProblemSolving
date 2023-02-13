#include<iostream>

//https://www.codechef.com/viewsolution/84657002 


std::string converToBinary(int dec)
{
    std::string ans = "";
    int cnts = 0;
    while(dec > 0) 
    {
        std::string temp = std::to_string(dec % 2);
        dec /= 2;
        if(temp == "1") cnts++;
        ans.append(temp);
    }
    return ans;
}
int countOne(std::string bin) 
{
    int ans =0;
    for(int i =0 ; i< bin.size();i++) 
    {
        if(bin[i]=='1') ans++;
    }
    return ans;
}
int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int dec, ans=0;
        std::cin>>dec;

        if(dec>=2048) 
        {
            ans = dec/2048;
            dec = dec % 2048;
        }
            std::string binRep = converToBinary(dec);
            std::cout<<ans + countOne(binRep)<<std::endl;
    }
    return 0;
}
std::string converToBinary(int dec)
{
    std::string ans = "";
    int cnts = 0;
    while(dec > 0) 
    {
        std::string temp = std::to_string(dec % 2);
        dec /= 2;
        if(temp == "1") cnts++;
        ans.append(temp);
    }
    return ans;
}
int countOne(std::string bin) 
{
    int ans =0;
    for(int i =0 ; i< bin.size();i++) 
    {
        if(bin[i]=='1') ans++;
    }
    return ans;
}
int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int dec, ans=0;
        std::cin>>dec;

        if(dec>=2048) 
        {
            ans = dec/2048;
            dec = dec % 2048;
        }
            std::string binRep = converToBinary(dec);
            std::cout<<ans + countOne(binRep)<<std::endl;
    }
    return 0;
}
