#include <vector>
int maximumNumInArray(int arr[],int size)
{
    int max = arr[0];
    for(int i=1;i<size;i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int searchNumber(int arr[],int size,int num)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i] == num)
        {
            return i;
        }
    }
    return -1;
}
void deleteNumberInArray(int arr[],int size,int index)
{
    for(int i=index;i<size;i++)
    {
        if(i != index)
        {
            arr[i-1] = arr[i];
        }
    }
}
void mergeTwoArrays(int des[],int arr1[],int arr2[],int desSize,int arr1Size,int arr2Size)
{
    int index = 0;
    for(index = 0;index<arr1Size;index++)
    {
        des[index] = arr1[index];
    }
    for(;index<=(arr1Size + arr2Size);index++)
    {
        des[index] = arr2[index - arr1Size];
    }
}
std::vector<int> FindEvenNumbers(int arr[],int size)
{
    std::vector<int> result;
    for(int i=0;i<size;i++)
    {
        if((arr[i] % 2) == 0)
            result.push_back(arr[i]);
    }
    return result;
}
std::vector<int> FindOddNumbers(int arr[],int size)
{
    std::vector<int> result;
    for(int i=0;i<size;i++)
    {
        if((arr[i] % 2) == 1)
            result.push_back(arr[i]);
    }
    return result;
}