#include <algorithm>
#include <catch2/catch_test_macros.hpp>

#include "Bubble.h"
#include "Insertion.h"

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
    
    vector<int> GetSimpleList()
    {
      return { 5, 4, 3, 2, 1 };  
    };
}

TEST_CASE("Bubble")
{
    const vector<int> list = GetRandomList();
    Bubble bubble(list);
    vector<int> result = bubble.Sort();
    REQUIRE(ranges::is_sorted(result));
}

TEST_CASE("Insertion")
{
    const vector<int> list = GetRandomList();
    Insertion insertion(list);
    vector<int> result = insertion.Sort();
    REQUIRE(ranges::is_sorted(result));
}