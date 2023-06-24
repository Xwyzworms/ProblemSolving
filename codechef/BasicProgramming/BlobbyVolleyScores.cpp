#include<iostream>

int main() 
{  
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n;
        std::cin>>n;
        std::string x;
        std::cin>>x;
        int count =0;
        int countB = 0;
        bool setA = true;
        bool setB = false;
        if(x[0] == 'A') count++;
        else setB = true;
        for(int i =1 ; i < n ;i++) {
            char current = x[i];
            char previous = x[i-1];
            if(current == 'A' && previous == 'A' && setA) 
            {
                count ++;
            }
            else if(current == 'B' && previous == 'A' && setA) 
            {
                setB = true;
                setA = false;
            }
            else if(current == 'B' && previous == 'B' && setB) {
                countB ++;
            }
            else if(current == 'A' && previous == 'B' && setB) 
            {
                setB = false;
                setA = true;
            }
        }   
        std::cout<<count << " " << countB<<std::endl;
    }

    return 0;
}