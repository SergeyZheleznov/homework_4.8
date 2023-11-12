// homework_4.8.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <catch2/catch_test_macros.hpp>

#include <cstdint>

uint32_t factorial(uint32_t number) {
    return number <= 1 ? number : factorial(number - 1) * number;
}

TEST_CASE("Factorials are computed", "[factorial]") {
    REQUIRE(factorial(1) == 1);
    REQUIRE(factorial(2) == 2);
    REQUIRE(factorial(3) == 6);
    REQUIRE(factorial(10) == 3'628'800);
}   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
