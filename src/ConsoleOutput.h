#pragma once
#include "OutputInterface.h"

namespace justi {
class ConsoleOutput : public OutputInterface {
  public:
    void write(const std::string&) override;
};
} // namespace justi