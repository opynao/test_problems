#include "gtest/gtest.h"
#include "calculations.h"

// 00 00 1^2

// 01 01
// 01 10 2^2
// 10 01
// 10 10

// 20 20
// 20 02
// 02 20
// 02 02
// 20 11 3^2
// 02 11
// 11 20
// 11 02
// 11 11

// 21 21
// 21 12 2^2
// 12 21
// 12 12

// 22 22 1^2

// --------
// 19
// n - number of cells
// 1^n + 2^n + 3^n + ... + 12^n + 13^n + 12^n + ... + 1^n

TEST(Basic, QuantityOfBeautifulNumbersFor3ElIn2)
{
    EXPECT_EQ(19, QuantityBeautifulNumbers(3, 2));
}

