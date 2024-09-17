/*
Name: Ahmed Emad Hassan
Problem: Create right angle triangle
*/

#include <iostream>
template<typename T>
void ReadNumber(T &num,const std::string &msg = "Please Enter a Number: ")
{
    std::cout<<msg;
    std::cin>>num;
}

void DrawRightAngleTriangle(int height)
{
    for(int i=1;i<=height;i++)
    {
        for(int j=1;j<=i;j++)
            std::cout<<"*";
        std::cout<<std::endl;
    }
}
int main() {
    int height;
    do
    {
    ReadNumber(height,"Enter the height of the triangle: ");
    }while(height<1);
    DrawRightAngleTriangle(height);
    return 0;
}
