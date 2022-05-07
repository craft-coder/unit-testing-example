#pragma once
#include <string>
#include <vector>

namespace justi {

// Pure abstract base class
class WordGeneratorInterface {
  public:
    using Words = std::vector<std::string>;

    virtual Words generate(std::size_t numWords) const = 0;
};
} // namespace justi