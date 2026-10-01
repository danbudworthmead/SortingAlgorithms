#pragma once

#include "Algorithm.h"

class Insertion : public Algorithm
{
public:
    explicit Insertion(const std::vector<int>& array);
    
    std::vector<int> Sort() override;
};
