#include "Insertion.h"

Insertion::Insertion(const std::vector<int>& array)
    : Algorithm(array)
{
}

std::vector<int> Insertion::Sort()
{
    for (int i = 1; i < array_.size(); ++i)
    {
        int idx = i;
        while (idx > 0 && array_[idx - 1] > array_[idx])
        {
            // swap
            array_[idx - 1] ^= array_[idx];
            array_[idx] ^= array_[idx - 1];
            array_[idx - 1] ^= array_[idx];
            idx--;
        }
    }
    
    return array_;
}
