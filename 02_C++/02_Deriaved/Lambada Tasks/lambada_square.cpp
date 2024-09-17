
#include <iostream>
int main()
{
    auto square = [](int num)
    {
        return num * num;
    };
    std::cout<<square(static_cast<int>(5));
    return 0;
}