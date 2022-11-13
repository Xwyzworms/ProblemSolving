#include<iostream>
#include<string>
std::string solve(int x, int y, int z) 
{
    if(x >= y && x >= z) return "Setter";
    else if(y >= x && y >= z) return "Tester";
    else return "Editorialist";
}




int main() 
{
    int testCase {0};
    std::cin >>testCase;
    while(testCase > 0 ) 
    {
        int a, b, c;
        std::cin>>a>>b>>c;
        std::cout<<solve(a,b,c)<<std::endl;
        testCase --;
    }
    return 0;
}