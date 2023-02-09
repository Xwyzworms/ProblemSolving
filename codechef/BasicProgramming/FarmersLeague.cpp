#include<iostream>

int main()
{
    int t;
    std::cin>>t;
    while(t--) 
    {
        int n;
        std::cin>>n;
        int firstPlace  = (n-1)*3;
        /**
         *  Simplenya kalau misalnya mau mempertahankan Peringkat ke dua, dengan maksimum
         *  kemenangannya
         *  ya maksimalnya adalah setengah pertandingan doang, 
         * Say ada 7 pertandingan, WIN 21 berarti ALL WIN !
         * But ketika 7/2 , 4 pertandingan doang yang kamu menangi, you get the max, and you can
         * still retain the second place. 4*3 = 12 Point
         * 
         * 
         * */
        int secondPlaceMax = ((n-2)- (n-2)/2)*3;
        std::cout<<firstPlace-secondPlaceMax<<std::endl;

    }
    return 0;
}
