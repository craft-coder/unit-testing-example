#pragma once
#include <string>
#include <vector>

namespace justi {
class WordGenerator {
  public:
    using Words = std::vector<std::string>;

    WordGenerator();
    Words generate(std::size_t numWords) const;

  private:
    Words wordDataBase_;
};
} // namespace justi