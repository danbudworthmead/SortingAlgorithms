#pragma once

#include <vector>

#include "Sorter.h"

class BubbleSort : public Sorter
{
public:
    explicit BubbleSort(const std::vector<int>& array);
    
    std::vector<int> Sort() override;
};
