#include "titanium/core/entry_point.hpp"

#include <iostream>

#include "oxygen/log.hpp"

namespace ttnm {
int start(int argc, char **argv) {
  std::unique_ptr<Application> app = create_application();

  if (app == nullptr) {
    std::cout << (xgn::log::Fatal() << 
      "Application '" << app->get_specs().name << "' couldn't start: "
      "create_application() returned a nullptr. " << 
      "Make sure you defined the function in the correct way.");

    return -1;
  }

  {
    xgn::Outcome outcome = app->init();

    if(!outcome.is_ok())
    {
      std::cout << xgn::log::Fatal() <<
        "Application '" << app->get_specs().name << "' couldn't start: " <<
        outcome.message();
    }
  }

  {
    xgn::Outcome outcome = app->run();

    if(!outcome.is_ok())
    {
      std::cout << (xgn::log::Fatal() <<
        "Application '" << app->get_specs().name << "' crashed: " <<
        outcome.message());
    }
  }

  return 0;
}
} // namespace ttnm