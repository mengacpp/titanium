#include "titanium/core/application.hpp"

namespace titanium
{
    Application::Application(const std::string &name)
    {
        m_specs.name = name;

        m_window = neon::create_window(m_specs.name);
    }
    
    void Application::run()
    {
        m_running = true;
        m_window->init();

        while(!m_window->should_close())
        {
            m_window->poll_events();
        }
    }

    void Application::close()
    {

    }
}