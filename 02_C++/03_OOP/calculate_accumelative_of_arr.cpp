
#include <iostream>
#include <numeric>
#include <vector>
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
    long long accum = std::accumulate(arr.begin(),arr.end(),0);
    std::cout<<"The accumulative value of the array is: "<<accum<<std::endl;
    return 0;
}