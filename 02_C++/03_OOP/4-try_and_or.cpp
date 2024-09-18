
#include <iostream>
int main()
{
    int a;
    std::cout<<"Please Enter a number: ";
    std::cin>>a;
    if(not(a == 0))
    {
        if (a < 20 and a > 5)
        {
            std::cout << "yes"<<std::endl;
        }
        if (a>=20 or a <= 5)
        {
            std::cout<<"No"<<std::endl;
        }
    }
    else 
    {
        std::cout<<"No"<<std::endl;
    }
}