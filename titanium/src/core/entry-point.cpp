#include "titanium/core/entry-point.hpp"

#include <iostream>

namespace titanium {
    void start(int argc, char **argv)
    {
        auto app = create_application();
        
        try {
            app->run();
        } catch (const std::exception &e) {
            std::cout << e.what();
        }

        app->close();

    }
}