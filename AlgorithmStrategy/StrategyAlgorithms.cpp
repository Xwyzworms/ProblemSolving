#include<iostream>
#include<vector>

int fibonacciDivideAndConquer(int a) 
{
    //This is just recursive, dynamic programming works by using memoization
    if(a <= 1) 
    {
        return a;
    }

    return fibonacciDivideAndConquer(a-1) + fibonacciDivideAndConquer(a-2);
}

int fibonnaciDynamicProgramming(int a)
{
    int arrAmpas[15] {0};
    if(a <= 1)
    {
        return a;
    }

    if(arrAmpas[a]) {
        return arrAmpas[a];
    }
    else 
    {
        int calc ;
        calc = fibonnaciDynamicProgramming(a-1) + fibonnaciDynamicProgramming(a-2);
        arrAmpas[a] = calc;
        return calc;
    }
}

int sumRecursive(int a) 
{   
    if(a == 1) 
    {
        return 1;
    }

    return sumRecursive(a-1) + a;
}


int main () 
{
    std::cout<<fibonacciDivideAndConquer(3)<<std::endl;
    std::cout<<sumRecursive(7)<<std::endl;
    std::cout<<fibonnaciDynamicProgramming(10)<<std::endl;
} 