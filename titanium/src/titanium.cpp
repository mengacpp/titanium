#include "titanium/titanium.hpp"

#include "oxygen/math.hpp"

#include <iostream>

using namespace oxy;

namespace tit {

void hello_titanium()
{
    std::cout << "Hello, Titanium!\n" << math::max(1, 3) << std::endl;
}

}