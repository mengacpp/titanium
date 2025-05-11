#include "titanium/core/log.hpp"

std::ostream& operator<<(std::ostream& os, const titanium::Message& msg) 
{
    os << msg.get_output();  
    return os; 
}