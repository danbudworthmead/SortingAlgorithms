#pragma once

#include <vector>

#include "Algorithm.h"

class Bubble : public Algorithm
{
public:
    explicit Bubble(const std::vector<int>& array);
    
    std::vector<int> Sort() override;
};
