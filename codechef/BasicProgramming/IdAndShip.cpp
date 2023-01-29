#include<iostream>
#include<cstring>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        char inp;
        std::cin>>inp;
        inp = std::tolower(inp);
        if(inp == 'b') {
            std::cout<<"BattleShip\n";
        }
        else if(inp == 'c') 
        {
            std::cout<<"Cruiser\n";
        }
        else if(inp == 'd')  
        {
            std::cout<<"Destroyer\n";
        }
        else {
            std::cout<<"Frigate\n";
        }
    }
    return 0;
}
