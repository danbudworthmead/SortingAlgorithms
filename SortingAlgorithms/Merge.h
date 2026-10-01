#pragma once
#include "Algorithm.h"

class Merge : public Algorithm
{
public:
    Merge(const std::vector<int>& array);
    
    std::vector<int> Sort() override;
    std::vector<int> Sort(std::vector<int> array);
    std::vector<int> MergeSort(std::vector<int> left, std::vector<int> right);
};
