#pragma once

#include <vector>

class BubbleSort
{
    std::vector<int> array_;
    
public:
    explicit BubbleSort(const std::vector<int>& array);
    
    std::vector<int> Sort();
};
