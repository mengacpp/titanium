#include "titanium/core/Application.hpp"

#include <iostream>
namespace tit
{

    void Application::run()
    {
        m_running = true;
        
        while(m_running)
        {
            // render & update logic goes here
            std::cout << m_specs.name << " running.\n";
            
        }


    }

    void Application::close()
    {
        // on close logic goes here
        std::cout << m_specs.name << " closed. ";
    }
}