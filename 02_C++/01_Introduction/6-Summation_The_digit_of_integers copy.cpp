/*
Name: Ahmed Emad Hassan
Problem: Summation the digit of integer
*/

#include <iostream>
#include <string>
int main()
{
    std::string input;
    std::cout<<"Enter The number: ";
    std::cin>>input;
    int sum = 0;
    for(auto c:input)
    {
        if(c>='0' && c <='9')
            sum += c - '0';
    }
    std::cout<<"The Sum is: "<<sum<<std::endl;
    return 0;
}
