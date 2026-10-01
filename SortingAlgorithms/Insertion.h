#pragma once

#include "Algorithm.h"

class Insertion : public Algorithm
{
public:
    explicit Insertion(const std::vector<int>& array);
    
    virtual std::vector<int> Sort() override;
};
