#include<iostream>
#include<stack>

int main() 
{
    // Properti Stack 
    // First in Last out ()
    // Top --> get the top data
    // pop --> remove the top data ()
    // Can be used to Invert an array / sorted data
    std::stack<std::string> languages ;
    languages.push("Indonesia");
    languages.push("france");
    languages.push("Japanese");


    // Inverted 
    while(!languages.empty())
    {
        std::cout<<languages.top()<<std::endl; // Japanese
        languages.pop();
    }
}
