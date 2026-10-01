#pragma once

#include <vector>

class Sorter
{    
public:
    Sorter();
    explicit Sorter(const std::vector<int>& array)
    {
        array_ = array;
    }
    
    virtual std::vector<int> Sort() = 0;
    
protected:
    std::vector<int> array_;
};
