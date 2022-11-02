#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
/// @brief KERJAIN INI ANJING BELUM KELAR BANGSAT
/// @param x1 
/// @param v1 
/// @param x2 
/// @param v2 
/// @return 
bool isX1GoingToPursue(int x1, int v1, int x2, int v2) 
{
    if(v1 > v2) 
    {
        if(x1 < x2 && x1 + (v1 * 2) >= x2 ) 
        {
            return true;
        }   
        else 
        {
            return false;
        }     
    }
    else
    {
        if(x2 < x1 && x2 + (v2 * 2) >= x1) 
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
}
std::string solve(int x1, int v1, int x2, int v2) 
{
    // Go Go Go
    if( ( isX1GoingToPursue(x1,v1,x2,v2)) && ( (( v1 * v2) % v1 == 0 )  && ((v1 * v2) % v2 == 0 )))
    return "YES";
    else  return "NO";
} 

int main() 
{
    int x1 = 0;
    int x2 = 5 ;
    int v1 = 2 ;
    int v2 = 3 ;

    int x11= 21;
    int x22 = 47;
    int v11 = 6;
    int v22 = 3;

    int x111=0;
    int x222=4;
    int v111=3;
    int v222=2;
    std::cout<<solve(x11, v11, x22, v22)<<std::endl;

    return 0;
}


