#include <catch2/catch_all.hpp>

TEST_CASE("Dummy", "[dummy]")
{
    int a = 0;
    int b = 1;

    REQUIRE(a != b);
}

