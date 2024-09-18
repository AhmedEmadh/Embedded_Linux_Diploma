
#include <iostream>
#include <vector>

template<typename T>
bool is_array_even(std::vector<T> arr)
{
    for(const auto &element: arr)
    {
        if((element % 2) == 1 ) //the array is not even
            return false;
    }
    return true;
}
std::vector<int> readArray()
{
    int size;
    std::cout<<"Enter the number of elements of the array: ";
    std::cin>>size;
    std::vector<int> arr(size);
    std::cout<<"Enter the elements of the array:"<<std::endl;
    for(int i=0;i<size;i++)
    {
        std::cout<<"Enter arr["<<i<<"]: ";
        std::cin>>arr[i];
    }
    return arr;
}
int main()
{
    std::vector<int> arr = readArray();
    if(is_array_even(arr))
    {
        std::cout<<"The Array is Even";
    }
    else 
    {
        std::cout<<"The Array is not even";
    }
    return 0;
}