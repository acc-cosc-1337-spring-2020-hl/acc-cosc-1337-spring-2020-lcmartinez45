#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "decisions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify Test Configuration", "verification") {
    REQUIRE(get_grade_points("A" == 4);
    REQUIRE(get_grade_points("B" == 3);
    REQUIRE(get_grade_points("C" == 2);
    REQUIRE(get_grade_points("D" == 1);
    REQUIRE(get_grade_points("E" == 0);
}

TEST_CASE("Verify Test Configuration", "verification") {
    REQUIRE(calculate_gpa(12, 45.0 == 3.75));
    REQUIRE(calculate_gpa(120, 390.0 == 3.25));
    REQUIRE(calculate_gpa(90, 180.0 == 2.00));
}

