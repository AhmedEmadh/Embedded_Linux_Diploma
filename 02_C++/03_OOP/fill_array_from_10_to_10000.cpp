
#include <iostream>
#include <vector>
#include <iterator>
class Printer
{
public:
    static void print(const std::vector<int> &arr)
    {
        std::copy(arr.begin(), arr.end(), std::ostream_iterator<int>(std::cout, " "));
        std::cout << std::endl;
    }
};
class Filler
{
public:
    static void fill(std::vector<int> &arr,int minValue,int maxValue)
    {
        if(minValue <= maxValue)
        {
            arr.clear();
            arr.reserve(maxValue-minValue);
            for(int i=minValue;i<=maxValue;i++)
            {
                arr.push_back(i);
            }
        }
    }
};
int main()
{
    std::vector<int> arr;
    Filler::fill(arr,10,10000);
    Printer::print(arr);
}