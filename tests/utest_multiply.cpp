#include <cassert>
#include <iostream>
#include "product.h"
int main()
{
Product p;
assert(p.computeA(-10, 20) == -200);
assert(p.computeB(-10, 20, 0) == -100);
return 0; 
}
