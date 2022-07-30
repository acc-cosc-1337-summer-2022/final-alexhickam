#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"
#include <vector>

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("test get function 1")
{
	vector<Toll> tolls;
	Toll amount1(5,6);
	tolls.push_back(amount1);
	REQUIRE(amount1.get_amount() == 1.25);
}
TEST_CASE("test get function 2")
{
	vector<Toll> tolls;
	Toll amount2(10,8);
	tolls.push_back(amount2);
	REQUIRE(amount2.get_amount() == 25.00);
}
TEST_CASE("test get function 3")
{
	vector<Toll> tolls;
	Toll amount3(4,18);
	tolls.push_back(amount3);
	REQUIRE(amount3.get_amount() == 4.00);
}