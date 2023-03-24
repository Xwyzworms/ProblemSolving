#include<iostream>


void storingAnArrayofChars() 
{
    char h = 'a';
    char stringOfH [] [20]= {"1as",'s','a'};
    std::cout<<stringOfH[0]<<std::endl;
    char predictions[] [30]{
        "Hello world, how are you",
        "hi there ",
        "Cheflasnsj"
    };
    std::cout<<predictions<<std::endl;

    // Using pointers much more efficient

    const char *predictions_ptr [] =  {
        "Hello world, how are you",
        "hi there",
        "Simple" ,
        "Just making sure your fine"
    };

    bool end {false};
    int i =0 ;

    while(!end) 
    {
        size_t rand_num = static_cast<size_t>((std::rand() % std::size(predictions_ptr)));
        std::cout<<predictions_ptr[rand_num]<<std::endl;
        i++;
        if(i == 10) 
        {
            end = true;
        }
    }
}

int main () 
{
    int x = 27;
    int *ip ;
    ip = &x;

    std::cout<<ip<<std::endl; // Address to 
    std::cout<<*ip<<std::endl;
    std::cout<<&ip<<std::endl;
    const char* message {"Hello Shuit"};
    std::cout<<message<<std::endl;

    storingAnArrayofChars();
    return 0;
}