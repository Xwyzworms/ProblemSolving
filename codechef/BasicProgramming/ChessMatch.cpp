#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n,a,b;
        std::cin>>n>>a>>b;
        
        // Understand  what is blitz cheess
        //  Every person is get 180 seconds initially
        //  For every move ,THEN THERE IS A 2 SECONDS added to their time
        //
        int totalTime = 2 * (180 + n);
        int sisaWaktu = a+b;
        int gameDuration = totalTime - sisaWaktu;

        std::cout<<gameDuration<<std::endl;
    }
    return 0;
}
