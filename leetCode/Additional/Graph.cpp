#include<iostream>
#include<vector>

void print(std::vector<std::vector<int>> matrix) 
{
    // TODO 
}
int main() 
{
    int N = 5;
    int E = 4;
    
    std::vector<std::vector<int>> matrix(N, std::vector<int>(N, 0));

    for(int i = 0 ; i < E ; i++) 
    {
        int fv, sv;
        std::cin>>fv>>sv;
        matrix[fv][sv] = 1;
        matrix[sv][fv] = 1;
    }

}
