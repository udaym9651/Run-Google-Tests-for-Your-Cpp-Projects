#include <cassert>
#include <iostream>
#include <gtest/gtest.h>
#include "product.h"


namespace
{
 TEST(PersonTestSuite, functionA)
    {
        Product p;
        assert(p.computeA(-10, 20) == -200);
    }
TEST(PersonTestSuite, functionB)
    {
        Product p;
        assert(p.computeB(-10, 20, 0) == -100);
    }
}
