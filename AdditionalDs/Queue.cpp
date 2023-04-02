#include<iostream>
#include<queue>
int main() 
{

    //properti queue : 
    // First in First OUT
    // Seperti halnya antrian
    // MIsalnya kamu pengen melakukan analisis gambar per frame
    // Kamu bisa pake ini :
    // Frame_1, frame_2, frame_3, frame_4 --> Masuk ke queue
    // queue {Frame_1, frame_2, frame_3, frame_4 }
    // Then when loop, you'll get frame_1, then 2 then 3 then 4 }
    // Basically mereka ini untuk store data ! Jadi instead using the array, use this stuff
    // Ntar dicoba di android

    std::queue<std::string>* p_squeu; // Lebih mudah ngasih alamat rumah dibandingkan harus ngasih replikasi rumah mu ( POINTER )
    p_squeu = new std::queue<std::string>; // Store the address of queue only, 

    p_squeu->push("Hello");
    p_squeu->push("How");
    p_squeu->push("Are");
    p_squeu->push("you ?");

    while(!p_squeu->empty()) 
    {
        std::cout<<p_squeu->front()<<std::endl;
        p_squeu->pop();
    }       


    return 0;
}