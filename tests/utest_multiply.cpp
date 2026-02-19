#include <cassert>
#include <iostream>
#include <gtest/gtest.h>
#include "product.h"


namespace
{
 TEST(PersonTestSuite2, functionA)
    {
        Product p;
        assert(p.computeA(-10, 20) == -200);
    }
TEST(PersonTestSuite2, functionB)
    {
        Product p;
        assert(p.computeB(-10, 20, 0) == -100);
    }
}
