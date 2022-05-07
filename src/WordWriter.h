#pragma once
#include "OutputInterface.h"
#include "WordGeneratorInterface.h"
#include <string>

namespace justi {

class WordWriter {
  public:
    WordWriter(WordGeneratorInterface& wordGenerator, OutputInterface& output)
        : wordGenerator_(wordGenerator)
        , output_(output) {}

    void printRandomWordsToUpper(std::size_t numWords);

  private:
    WordGeneratorInterface& wordGenerator_;
    OutputInterface& output_;
};

} // namespace justi
