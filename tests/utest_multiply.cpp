#include <cassert>
#include <iostream>
#include "product.h"
namepspace
{
Product p;
static_assert(p.computeA(-10, 20) == -200);
static_assert(p.computeB(-10, 20, 0) == -100);
}
