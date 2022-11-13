#include<iostream>
#include<vector>


int solveLamaIniCuk(int n, int m, int s) 
{
    int prisoner {0};
    prisoner = s;
    while(m != 1) 
    {
        m --;
        if (prisoner == n ) 
        {
            prisoner = 1;
        }
        else {
        prisoner ++;        
        }
    }
    return prisoner;
}

int solve(int n, int m, int s)
{
    int prisoner = (m - 1 + s)  % n;
    if (prisoner % n == 0 )return n;
    else return prisoner;

}

int main () 
{
    int prisoner {5};
    int candy {2};
    int starting {2};
    std::cout<<solve(prisoner, candy, starting);
}