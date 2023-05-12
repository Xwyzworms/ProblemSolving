#include <iostream>
#include<climits>

int main()
{
    int n;
    std::cin >> n;
    int vect[1000] = {0};

    for (int k = 0; k < n; k++)
    {
        int state = -1;
        std::string condition;
        std::cin >> condition;
        if (condition == "SAMA")
        {
            state = 0;
        }
        else if (condition == "SATU")
        {
            state = 1;
        }
        else
        {
            state = 2;
        }

        int a1, b1;
        std::cin >> a1;
        int a;
        if (state == 1)
        {
            for (int i = 0; i < a1; i++)
            {
                std::cin >> a;
            }
            std::cin >> b1;
            for (int i = 0; i < b1; i++)
            {
                std::cin >> a;
                vect[a]++;
            }
        }
        else if (state == 2)
        {

            for (int i = 0; i < a1; i++)
            {
                std::cin >> a;
                vect[a]++;
            }
            std::cin >> b1;
            for (int i = 0; i < b1; i++)
            {
                std::cin >> a;
            }
        }
        else
        {
            for (int i = 0; i < a1; i++)
            {
                int a;
                std::cin >> a;
            }
            std::cin >> b1;
            for (int i = 0; i < b1; i++)
            {
                std::cin >> a;
            }
        }
    }
    int indx = 0;
    int max1 = INT_MIN;
    int max1_indx = -1;
    int max2 = INT_MIN;
    int max2_indx = -1;
    for (int i = 0; i < sizeof(vect) / sizeof(int); i++)
    {
        if (max1 < vect[i])
        {
            max1 = vect[i];
            max1_indx = i;
        }
    }
    vect[max1_indx] = 0;

    for (int i = 0; i < sizeof(vect) / sizeof(int); i++)
    {

        if (max2 < vect[i])
        {
            max2 = vect[i];
            max2_indx = i;
        }
    }
    if (max1 > max2)
    {

        std::cout << "Ditemukan koin palsu dengan nomor seri " << max1_indx<< std::endl;
    }
    else
    {
        std::cout << "Maaf tidak dapat mengidentifikasi koin palsunya" << std::endl;
    }
}