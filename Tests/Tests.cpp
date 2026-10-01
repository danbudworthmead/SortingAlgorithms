#include <algorithm>
#include <catch2/catch_test_macros.hpp>

#include "Bubble.h"
#include "Insertion.h"
#include "Merge.h"
#include "Selection.h"

using namespace std;
namespace
{
    vector<int> GetRandomList()
    {
        const int len = rand() % 1000;
        vector<int> result(len);
        for (int i = 0; i < len; ++i)
        {
            result[i] = rand() % 1000;
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

TEST_CASE("Selection")
{
    const vector<int> list = GetRandomList();
    Selection selection(list);
    vector<int> result = selection.Sort();
    REQUIRE(ranges::is_sorted(result));
}

TEST_CASE("Merge")
{
    const vector<int> list = GetSimpleList();
    Merge selection(list);
    vector<int> result = selection.Sort();
    REQUIRE(ranges::is_sorted(result));
}