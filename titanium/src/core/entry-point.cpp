#include "titanium/core/entry-point.hpp"


namespace tit {
    void start(int argc, char **argv)
    {
        auto app = create_application();
        
        app->run();

        app->close();

    }
}