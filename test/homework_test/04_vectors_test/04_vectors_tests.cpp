#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "vectors.h"
#include <vector>

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test get_max_from_vector function") {
    vector<int> num{ 9, 10, 99, 5, 67 };
    vector<int> num1{ 1000 };
    get_max_from_vector(num);
    REQUIRE(num == num1);
    
    vector<int> nums{ 15,12,11,99,88 };
    vector<int> num2{ 99 };
    get_max_from_vector(nums);
    REQUIRE(nums == num2);
    
    vector<int> numb{ 9, 10, 99, 5, 67 };
    vector<int> num3{ 1000 };
    get_max_from_vector(numb);
    REQUIRE(numb == num3);
}

TEST_CASE("Test is prime function") {
    REQUIRE(is_prime(2) == true);
    REQUIRE(is_prime(4) == false);
    REQUIRE(is_prime(43) == true);
    REQUIRE(is_prime(44) == false);
}

TEST_CASE("Test vector of primes function") {
    int int1 = 50;
    vector_of_primes(int1);
    vector<int> int2{ 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };
    REQUIRE(int1 == int2);
    
    int int3 = 10;
    vector<int> int4{ 2, 3, 5, 7};
    vector_of_primes(10);
    REQUIRE(int3 == int4);
}

