#include<iostream>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int maxAns = 0;
        int a1,a2,b1,b2,c1,c2;
        std::cin>>a1>>a2;
        std::cin>>b1>>b2;
        std::cin>>c1>>c2;


        // do some useless stuff
        int sumA = a1+a2;
        int sumB = b1+b2;
        int sumC = c1+c2;

        if(maxAns < sumA) 
        {
            maxAns = sumA ;
        }

        if(maxAns < sumB) 
        {
            maxAns = sumB ;
        }
        if(maxAns < sumC) 
        {
            maxAns = sumC ;
        }

        std::cout<<maxAns<<std::endl;

        
    }
    return 0;
}
