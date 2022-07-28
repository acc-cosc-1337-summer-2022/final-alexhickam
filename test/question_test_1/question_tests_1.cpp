#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"
#include "question1.cpp"
#include <iostream>

TEST_CASE("Verify Test Configuration", "verification") 
{
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("test 1; hours 40 rate 10")
{
	PayRoll test1;
	test1.set_hours(40);
	test1.set_pay_rate(10);
	REQUIRE(test1.get_gross_pay() == 400);
}

TEST_CASE("test 2; hours 20 rate 15")
{
	PayRoll test2;
	test2.set_hours(25);
	test2.set_pay_rate(15);
	REQUIRE(test2.get_gross_pay() == 375);
}

TEST_CASE("test 3; hours 0 rate 0")
{
	PayRoll test3;
	test3.set_hours(0);
	test3.set_pay_rate(0);
	REQUIRE(test3.get_gross_pay() == 0);
}

