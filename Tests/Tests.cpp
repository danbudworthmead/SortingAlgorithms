#include <catch2/catch_test_macros.hpp>

#include "BubbleSort.h"

TEST_CASE("Bubble")
{
    auto bubble = BubbleSort({ 5, 4, 3, 2, 1 });
    auto result = bubble.Sort();
    REQUIRE(result == std::vector<int>({ 1, 2, 3, 4, 5 }));
}
