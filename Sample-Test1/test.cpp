#include "pch.h"
#include "../tdd-prime-factors/prime-factors.cpp"

using namespace std;

TEST(TestCaseName, TestName) {
	PrimeFactor prime_factor;
	vector<int> expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}