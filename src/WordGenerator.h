#pragma once
#include "WordGeneratorInterface.h"

namespace justi {
class WordGenerator : public WordGeneratorInterface {
  public:
    WordGenerator();
    Words generate(std::size_t numWords) const override;

    void shuffleWords() {};

  private:
    Words wordDataBase_;
};
} // namespace justi