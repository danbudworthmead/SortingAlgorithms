#pragma once
#include <vector>

#include "Algorithm.h"

class Selection : public Algorithm
{
public:
    Selection(std::vector<int> array);
    
    std::vector<int> Sort() override;
};
