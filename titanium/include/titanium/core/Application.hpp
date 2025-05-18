#pragma once

#include <string>
#include <memory>

#include "neon/window.hpp"

#include "oxygen/outcome.hpp"

namespace ttnm
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

        xgn::Outcome init();

        xgn::Outcome run();

        inline ApplicationSpecs get_specs() const {return m_specs; };

    protected:
        ApplicationSpecs m_specs;
        std::unique_ptr<neon::Window> m_window;
        
    private:

        bool m_is_running;
        bool m_is_initialized;
    };
}