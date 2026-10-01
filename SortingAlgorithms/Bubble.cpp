#include <Bubble.h>

using namespace std;

Bubble::Bubble(const std::vector<int>& array)
    : Algorithm(array)
{
}

vector<int> Bubble::Sort()
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
