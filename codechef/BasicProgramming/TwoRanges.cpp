#include<iostream>
#include<set>

int main() 
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int a,b,c,d;
        std::set<int> ve;
        std::cin>>a>>b>>c>>d;
        for(a ; a <= b ; a++)
        {
            ve.insert(a);
        }
            for(c ; c <= d ; c++)

            {
                ve.insert(c);
            }
        std::cout<<ve.size()<<std::endl;
    }
    return 0;
}
