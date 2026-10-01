#include "Selection.h"

Selection::Selection(std::vector<int> array)
    : Algorithm(array)
{
}

std::vector<int> Selection::Sort()
{
    for (int i = 0; i < array_.size() - 1; ++i)
    {
        // find the smallest number
        int smallest_idx = i;
        for (int idx = i + 1; idx < array_.size(); ++idx)
        {
            if (array_[idx] < array_[smallest_idx])
            {
                smallest_idx = idx;
            }
        }
        
        if (smallest_idx != i)
        {
            array_[i] ^= array_[smallest_idx];
            array_[smallest_idx] ^= array_[i];
            array_[i] ^= array_[smallest_idx];
        }
    }
    
    return array_;
}
