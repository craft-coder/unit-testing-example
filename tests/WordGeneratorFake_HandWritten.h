#pragma once
#include "WordGeneratorInterface.h"

namespace justi {
class WordGeneratorFake : public WordGeneratorInterface {
  public:
    Words generate(std::size_t numWords) const override { return wordDataBase_; }
    Words wordDataBase_;
};
} // namespace justi