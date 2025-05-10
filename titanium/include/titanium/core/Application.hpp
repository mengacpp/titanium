#pragma once

#include <string>

namespace tit
{
    struct ApplicationSpecs
    {
        std::string name = "Titanium application";
    };

    class Application 
    {
    public:
        Application() = default;
        ~Application() = default;

        void run();

        void close();

        inline ApplicationSpecs get_specs() const {return m_specs; };

    protected:
        ApplicationSpecs m_specs;
        
    private:

        bool m_running;
    };
}