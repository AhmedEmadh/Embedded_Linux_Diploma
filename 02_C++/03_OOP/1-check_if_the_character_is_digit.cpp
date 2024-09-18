
#include <cctype>
#include <iostream>
int main()
{
    unsigned char c;
    std::cout<<"Please Enter the character to check: ";
    std::cin>>c;
    if(std::isdigit(c))
    {
        std::cout<<"The input is digit";
    }
    else 
    {
        std::cout<<"The input is not digit";
    }
    return 0;
}