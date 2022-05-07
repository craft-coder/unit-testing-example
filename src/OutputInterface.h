#pragma once
#include <string>

namespace justi {

// Pure abstract base class
class OutputInterface {
  public:
    virtual void write(const std::string&) = 0;
};
} // namespace justi