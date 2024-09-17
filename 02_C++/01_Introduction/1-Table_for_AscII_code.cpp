/*
Name: Ahmed Emad Hassan
Problem: Create Table for Ascii code
*/
#include <iostream>
int main() {
    std::cout<<"ASCII Code Table:"<<std::endl;
    std::cout<<"+------+------+"<<std::endl;
    std::cout<<"| Char | ASCII |"<<std::endl;
    std::cout<<"+------+------+"<<std::endl;
    for(int i=0;i<256;i++)
    {
        std::cout<<"|   "<<static_cast<char>(i)<<"   |"<<"   "<<i<<"\t|"<<std::endl;
    }

    return 0;
}
