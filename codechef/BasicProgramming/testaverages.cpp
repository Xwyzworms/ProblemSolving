#include<iostream>
#include<string>

std::string solve(int p1, int p2, int p3) 
{
    int count {0};
    if( ( p1 + p2 )/ 2 < 35.0) count ++;
    if( ( p2 + p3 )/ 2 < 35.0) count ++;
    if((p1 + p3) / 2 < 35.0) count ++;

    if(count != 0) return "fail";
    return "pass";
    

}


int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        int n1,n2,n3;
        std::cin>>n1>>n2>>n3;
        std::cout<<solve(n1,n2,n3)<<std::endl;
        t--;
    }
    return 0;
}