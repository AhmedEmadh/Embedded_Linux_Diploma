#include <iostream>
#include <vector>

template<typename T>
bool is_any_value_of_array_even(std::vector<T> arr)
{
    for(const auto &element: arr)
    {
        if((element % 2) == 0 ) //the array is not even
            return true;
    }
    return false;
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
    if(is_any_value_of_array_even(arr))
    {
        std::cout<<"The Array has Even Value";
    }
    else 
    {
        std::cout<<"The Array is don't have even value";
    }
    return 0;
}