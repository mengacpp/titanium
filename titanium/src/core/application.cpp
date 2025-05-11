#include "titanium/core/application.hpp"

#include <iostream>

#include "titanium/core/log.hpp"

namespace titanium
{

    void Application::run()
    {
        m_running = true;
        std::cout << (LogDebug() << m_specs.name << " running");

        while(m_running)
        {
        }


    }

    void Application::close()
    {
        std::cout << (LogDebug() << m_specs.name << " closed");

    }
}