#include "titanium/core/Application.hpp"

#include <memory>

namespace tit
{
    extern std::unique_ptr<Application> create_application();

    void start(int argc, char **argv);
}

