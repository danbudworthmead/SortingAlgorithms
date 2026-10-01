#include "Merge.h"

using namespace std;

Merge::Merge(const vector<int>& array)
    : Algorithm(array)
{
}

vector<int> Merge::Sort()
{
    return Sort(array_);
}

vector<int> Merge::Sort(vector<int> array)
{
    if (array.size() == 1)
    {
        return array;
    }
    
    vector<int> left(array.begin(), array.begin() + array.size() / 2);
    vector<int> right(array.begin() + array.size() / 2, array.end());
    
    left = Sort(left);
    right = Sort(right);
    
    return MergeSort(left, right);
}

vector<int> Merge::MergeSort(vector<int> left, vector<int> right)
{
    vector<int> result;
    
    while (!left.empty() && !right.empty())
    {
        if (left[0] > right[0])
        {
            result.push_back(right[0]);
            right.erase(right.begin());
        }
        else
        {
            result.push_back(left[0]);
            left.erase(left.begin());
        }
    }
    
    while (!left.empty())
    {
        result.push_back(left[0]);
        left.erase(left.begin());
    }
    
    while (!right.empty())
    {
        result.push_back(right[0]);
        right.erase(right.begin());
    }
    
    return result;
}
