#include<iostream>
#include<list>

class graph {

    public:
        std::list<int> *adjlist;
        int n;
        graph(int v) 
        {
            adjlist = new std::list<int> [v];
            n = v;
        }

        void addEdge(int u, int v, bool bi) 
        {
            // Bi --> Biderectional xD   
            adjlist[u].push_back(v);
            if(bi) {
                adjlist[v].push_back(u);
            }
        }

        void print() {
            for(int i = 0 ; i< n ; i++) 
            {
                std::cout<<i<<"-->";
                for(auto it : adjlist[i]) 
                {
                    std::cout<<it<<" ";
                }
                std::cout<<std::endl;
            }
            std::cout<<std::endl;
        }

};

int main() {
    graph g(5);
    g.addEdge(1,2,true);
    g.addEdge(4,2,true);
    g.addEdge(1,3,true);
    g.addEdge(4,3,true);
    g.addEdge(1,4,true);


    g.print();
    return 0;
}