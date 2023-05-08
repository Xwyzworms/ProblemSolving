#include<iostream>
#include<unordered_set>
#include<vector>
#include<climits>


/// @Ide besarnya, Find parent, kalau parentnya ga ada, then kita bisa while loop ke depan untuk cari successornya :)
/// TIME COMPLEXITY O(N) ==> Karena kita perlu loop keseluruh input, find menggunakan unordered_set takes O(1)
/// @param a ==> BLOK 
/// @return BLOK
int solve(std::vector<int> a) 
{
    std::unordered_set<int> content;
    std::unordered_set<int> done;
    int n = a.size() -1;
    for(int i : a) 
    {
        content.insert(i);
    }
    int largest = INT_MIN;
    for(int element : a) 
    {
        int parent = element - 1;
        int ans = 1;

        if(content.find(parent) == content.end()) 
        {
            int succs = element + 1;
            // L.I ==> Selalu ditemukan nilai succesor - 1 pada set konten 
            // dan set done pasti memiliki set konten succesor - 1 || 
            // content[succs-1] exists && done[succs-1] exists
            // O(1), pake unordered_set !
            while(succs <= n && content.find(succs) != content.end() && done.find(succs) == done.end())
            {
                ans++;
                done.insert(succs);
                succs++;
            }
        }
        if(largest < ans) 
        {
            largest = ans;
        }
    }

    return largest;
}

int main() 
{
    std::vector<int> arr{1, 9, 3, 0 , 18, 5, 2, 4, 10, 7, 12,6};
    std::cout<<solve(arr)<<std::endl;
    return 0;
}