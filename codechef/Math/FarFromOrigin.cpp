#include<iostream>
#include<cmath>
int main()
{

    int t;
    std::cin>>t;
    while(t--) 
    {
        int x1,y1,x2,y2;
        std::cin>>x1>>y1>>x2>>y2;
        int diffChefX = std::pow(x1,2);
        int diffChefY = std::pow(y1,2);

        int diffChefX2 = std::pow(x2,2);
        int diffChefY2 = std::pow(y2,2);


        if( diffChefY + diffChefX > (diffChefX2 + diffChefY2) )
        {
            std::cout<<"ALEX\n";
        }
        else if(diffChefY + diffChefX < (diffChefX2 + diffChefY2) )
        {

            std::cout<<"Bob\n";
        }
        else 
        {

            std::cout<<"Equal\n";
        }

    }

    return 0;
}

