#include<iostream>
#include <vector>
int solve(int n)
{
    std::vector<int> vect;
    int tot = n;
    while (n > 0)
    {
        int temp;
        std::cin >> temp;
        vect.push_back(temp);
        n--;
    }

    int p1;
    int p2{vect.size() - 1};
    int counter{0};
    int freq, max {0};
    for (int i = 0; i < vect.size(); i++)
    {
        freq = 1;
        for (int j = i + 1; j < vect.size(); j++)
        {
            if (vect[i] == vect[j])
            {
                freq++;
            }
        }
        if (freq > max)
        {
            max = freq;
        }
    }
    return abs(tot - max);
}
int main()
{
    int t;
    std::cin >> t;
    while (t > 0)
    {
        int n;
        std::cin >> n;
        std::cout << solve(n) << std::endl;
        t--;
    }
    return 0;
}