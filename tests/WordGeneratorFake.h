#pragma once
#include "WordGeneratorInterface.h"
#include <gmock/gmock.h>

namespace justi {
class WordGeneratorFake : public WordGeneratorInterface {
  public:
    MOCK_METHOD(Words, generate, (std::size_t numWords), (const override));
};
} // namespace justi