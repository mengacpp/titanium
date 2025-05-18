#include "titanium/core/application.hpp"

namespace ttnm {

  Application::Application(const std::string &name)
  {
    m_specs.name = name;
    m_is_initialized = false;
  };

  xgn::Outcome Application::init() {
    if(m_is_initialized) 
    {
      std::cout << (xgn::log::Warning() << "You are trying to initialize the application twice");
      return xgn::outcome_ok();
    }
    
    {
      xgn::OutcomeOr<std::unique_ptr<neon::Window>> outcome 
        = neon::create_window(m_specs.name);

      if(!outcome.is_ok())
      {
        return outcome.outcome();
      }

      m_window = *std::move(outcome);
    }

    m_is_initialized = true;
    return xgn::outcome_ok();
  }

xgn::Outcome Application::run() {
  if(!m_is_initialized)
  {
    return xgn::Outcome(xgn::OutcomeCode::InvalidParams, "Application not initialized");
  }

  {
    xgn::Outcome outcome = m_window->init();

    if(!outcome.is_ok())
    {
      return outcome;
    }
  }

  m_is_running = true;

  while (!m_window->should_close()) {
    m_window->swap_buffers();

    // render / game logic here

    m_window->poll_events();
  }

  return xgn::outcome_ok();
}
} // namespace ttnm