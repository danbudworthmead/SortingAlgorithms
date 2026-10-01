#include <BubbleSort.h>

using namespace std;

BubbleSort::BubbleSort(const std::vector<int>& array)
    : Sorter(array)
{
}

vector<int> BubbleSort::Sort()
{
    int num_swaps;
    do
    {
        num_swaps = 0;
        for (int i = 0; i < array_.size() - 1; ++i)
        {
            if (array_[i] > array_[i + 1])
            {
                array_[i] ^= array_[i + 1];
                array_[i + 1] ^= array_[i];
                array_[i] ^= array_[i + 1];
                num_swaps++;
            }
        }
    } while (num_swaps > 0);
    
    return array_;
}
