#include "Logger.hh"
#include <iostream>



#ifdef ENABLE_LOGGING
void log(const std::string& message) {
    std::clog << "[LOG] " << message << std::endl;
}
#else
void log(const std::string& message) {
    // Do nothing
}
#endif