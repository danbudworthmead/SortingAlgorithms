#include <algorithm>
#include <catch2/catch_test_macros.hpp>

#include "BubbleSort.h"

using namespace std;
namespace
{
    vector<int> GetRandomList()
    {
        const int len = rand() % 100;
        vector<int> result(len);
        for (int i = 0; i < len; ++i)
        {
            result[i] = rand() % 100;
        }
        return result;
    }
}

TEST_CASE("Bubble")
{
    const vector<int> list = GetRandomList();
    BubbleSort bubble = BubbleSort(list);
    vector<int> result = bubble.Sort();
    REQUIRE(ranges::is_sorted(result));
}