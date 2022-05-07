#pragma once
#include "Output.h"
#include "WordGenerator.h"
#include <string>

namespace justi {

class WordWriter {
  public:
    WordWriter(WordGenerator& wordGenerator, Output& output)
        : wordGenerator_(wordGenerator)
        , output_(output) {}

    void printRandomWordsToUpper(std::size_t numWords);

  private:
    WordGenerator& wordGenerator_;
    Output& output_;
};

} // namespace justi
