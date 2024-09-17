/*
Name: Ahmed Emad Hassan
Problem: Create Multiplication table
*/

#include <iostream>
int main()
{
    int LastMulTable = 12;
    for(int tableNumber = 1;tableNumber<=LastMulTable;tableNumber++)
    {
        std::cout<<"||\t\t     ===Table "<<tableNumber<<"===\t\t\t||"<<'\n';
        for(int secoundNumber=tableNumber;secoundNumber<=12;secoundNumber++)
            std::cout<<"||\t\t\t"<<tableNumber<<"x"<<secoundNumber<<" = "<<tableNumber * secoundNumber<<" \t\t\t||"<<'\n';
        std::cout<<std::endl;
    }
    return 0;
}