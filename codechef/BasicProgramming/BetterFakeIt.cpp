#include<iostream>
#include<vector>
#include<unordered_set>
int main() 
{
    int n;
    std::cin>>n;
    std::unordered_set<int> trueVars;
    std::unordered_set<int> allUnique;
    int cond[n];
    for(int k = 0 ; k < n ; k++)
    {
        std::string condition ;
        std::cin>>condition;
        if(condition == "SAMA") 
        {
            cond[k] = 0;
        }
        else if(condition == "SATU")
        {
            cond[k] = 1;
        }
        else 
        {
            cond[k]= 2;
        }
        
        int a1, b1;
        std::cin>>a1;
        int a[a1];
        for (int i = 0 ; i < a1; i++) 
        {
            std::cin>>a[i];
            allUnique.insert(a[i]);
            if(cond[k] == 0 )
            {
                for(int x = 0 ; x < a1; x++) 
                {
                    trueVars.insert(a[x]);
                }
            }else if(cond[k] == 1) 
            {
                for(int x = 0 ; x < a1; x++) 
                {
                    trueVars.insert(a[x]);
                }
            }
            
        }
        std::cin>>b1;
        int b[b1];
        for (int i = 0 ; i < b1; i++) 
        {
            std::cin>>b[i];
            allUnique.insert(b[i]);
            if(cond[k] == 0 )
            {
                for(int x = 0 ; x < b1; x++) 
                {
                    trueVars.insert(b[x]);
                }
            }
            else if (cond[k] == 2) 
            {
                for(int x = 0 ; x < b1; x++) 
                {
                    trueVars.insert(b[x]);
                }
            }
        }

    }
    
    int ans {-1};
    for(auto s : allUnique) 
    {
        if(trueVars.count(s) < 1)
        {
            ans = s;
            break;
        }
    }
    if(ans != -1) 
    {
        std::cout<<"Ditemukan koin palsu dengan nomor seri "<<ans<<std::endl;
    } 
    else 
    {

        std::cout<<"Maaf tidak dapat mengidentifikasi koin palsunya" <<std::endl;
    }
    return 0;
}  