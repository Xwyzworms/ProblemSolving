#include<iostream>

std::string swapString(std::string x) 
{
    std::string ans = "";
    int cns {1};
    std::string str1, str2,last;
    bool isOdd {false};
    int nSize {0};
    if(x.size() % 2 != 0) isOdd = true;
    if (isOdd) 
    {
        nSize = x.size() - 1;
        last = x[x.size() - 1];
    }
    else 
    {
        nSize = x.size();
    }
    for(int i = 0 ; i < nSize ; i ++) 
    {
        if(cns == 2) 
        {
            //Swapped here
            str1 = x[i-1];
            str2 = x[i];
            cns = 0;
            ans.append(str2);
            ans.append(str1);
        }
        cns++;
    }
    if(isOdd) ans.append(last);
    return ans;
}

std::string replaceString(std::string x) 
{
    std::string ans = x;
    for(int i = 0 ; i < x.size() ; i ++) 
    {
        // Less than M
        if(int(x[i]) <= 109) 
        {
            int sa = 109 - int(x[i]);
            sa = 2*sa + 1;
            ans[i] = int(x[i]) + sa;
        }
        else 
        {
            int sa = int(x[i]) - 110;
            sa = 2*sa + 1;
            ans[i] = int(x[i]) - sa;
        }
    }
    return ans;

}

int main() 
{

    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int n;
        std::string sampleText,ans ;
        int arrNum[25];
        std::cin>>n;
        std::cin>>sampleText;
    
        // Swapped()
        ans = swapString(sampleText);
        std::cout<<replaceString(ans)<<std::endl;

        t--;
    } 

    return 0;

}
