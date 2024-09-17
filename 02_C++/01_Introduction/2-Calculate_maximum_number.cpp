/*
Name: Ahmed Emad Hassan
Problem: calculate maximum number between three values
*/

#include <algorithm>
#include <iostream>
int main() {
    //defining local variables
    int maximum;
    int n1,n2,n3;
    //read 3 values
    std::cout<<"Enter First value: ";
    std::cin>>n1;
    std::cout<<"Enter Secound value: ";
    std::cin>>n2;
    std::cout<<"Enter Third value: ";
    std::cin>>n3;
    //calculate maximum
    maximum = std::max(n1,std::max(n2,n3));
    //print maximum
    std::cout<<"The maximum is: "<<maximum<<std::endl;
    return 0;
}
