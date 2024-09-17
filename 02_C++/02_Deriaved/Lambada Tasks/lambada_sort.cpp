#include <algorithm>
#include <iostream>

void printArr(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        std::cout<<*(arr+i)<<' ';
    }
    std::cout<<std::endl;
}

int main()
{
    const int size = 10;
    int arr[size] = {42, 17, 8, 99, 23, 56, 3, 78, 12, 65};
    std::sort(arr,arr+10,[](int first,int last){return first < last;});
    printArr(arr,size);
    return 0;
}