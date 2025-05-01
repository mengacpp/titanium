#include "titanium/titanium.hpp"

#include "oxygen/math.hpp"
#include "neon/window.hpp"

#include <iostream>

using namespace oxy;

namespace tit {

void hello_titanium()
{
    std::cout << "Hello, Titanium!\n" << math::max(1, 3) << std::endl;
    neon::Window w("My window");
}

}