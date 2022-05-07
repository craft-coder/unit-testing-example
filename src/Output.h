#pragma once
#include "OutputInterface.h"

namespace justi {
class Output : public OutputInterface {
  public:
    void write(const std::string&) override;
};
} // namespace justi