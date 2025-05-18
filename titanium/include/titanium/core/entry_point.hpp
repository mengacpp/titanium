#include "titanium/core/application.hpp"

#include <memory>

namespace ttnm
{
    extern std::unique_ptr<Application> create_application();

    int start(int argc, char **argv);
}

