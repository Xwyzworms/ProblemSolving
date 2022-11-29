#include<iostream>
#include<iomanip>
int main() 
{
    int t;
    std::cin>>t;
    while(t > 0) 
    {
        double salary, DA, HRA, ans;
        
        std::cin>>salary;
        if(salary < 1500 ) 
        {
            DA = salary * 90 / 100;
            HRA = salary * 10 / 100;
        }
        else 
        {
            DA = salary * 98 / 100;
            HRA = 500;
        }
        ans = salary + DA + HRA;
        std::cout<<std::fixed<<std::setprecision(2)<<ans<<std::endl;
        t--;
    }
    return 0;
}
