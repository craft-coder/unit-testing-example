#pragma once
#include "Output.h"
#include <string>

namespace justi {

class WordWriter {
  public:
    void printToUpper(std::string);

  private:
    Output output_;
};

} // namespace justi
