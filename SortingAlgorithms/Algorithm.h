#pragma once

#include <vector>

class Algorithm
{    
public:
    virtual ~Algorithm() = default;
    Algorithm();
    explicit Algorithm(const std::vector<int>& array)
    {
        array_ = array;
    }
    
    virtual std::vector<int> Sort() = 0;
    
protected:
    std::vector<int> array_;
};
