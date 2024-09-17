/*
Name: Ahmed Emad Hassan
Problem: Conversion from decimal to binary and vise versa
*/

#include <bitset>
#include <iostream>
int main()
{
    std::bitset<8> number;
    std::string binary;
    int decimal;
    std::cout<<"Enter a decimal number: ";
    std::cin>>decimal;
    number = std::bitset<8>(decimal);
    std::cout<<"Binary Representation: "<<number<<std::endl;
    std::cout<<"Enter a binary number: ";
    std::cin>>binary;
    number = std::bitset<8>(binary);
    std::cout<<"Decimal representation: "<<number.to_ullong();
    return 0;
}