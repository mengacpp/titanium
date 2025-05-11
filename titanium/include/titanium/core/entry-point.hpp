#include "titanium/core/application.hpp"

#include <memory>

namespace titanium
{
    extern std::unique_ptr<Application> create_application();

    void start(int argc, char **argv);
}

