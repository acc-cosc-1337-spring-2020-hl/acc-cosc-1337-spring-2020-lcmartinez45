#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "loops.h"
#include "rectangle.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test calculate area function") {
    REQUIRE(calculate_area(4, 5) == 20);
    REQUIRE(calculate_area(10, 10) == 100);
    REQUIRE(calculate_area(100, 10) == 1000);
}