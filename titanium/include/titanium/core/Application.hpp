#pragma once

#include <string>
#include <memory>

#include "neon/window.hpp"

namespace titanium
{
    struct ApplicationSpecs
    {
        std::string name = "Titanium application";
    };

    class Application 
    {
    public:
        Application(const std::string &name);
        ~Application() = default;

        void run();

        void close();

        inline ApplicationSpecs get_specs() const {return m_specs; };

    protected:
        ApplicationSpecs m_specs;
        std::unique_ptr<neon::Window> m_window;
        
    private:

        bool m_running;
    };
}