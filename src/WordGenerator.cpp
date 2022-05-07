#include "Wordgenerator.h"

using namespace justi;

WordGenerator::WordGenerator()
    : wordDataBase_{"justi", "test", "hallo", "welt", "cool", "example", "whatever"} {
}

WordGenerator::Words WordGenerator::generate(std::size_t numWords) const {
    Words result;

    for (auto i=0; i<numWords; i++) {
        auto word = wordDataBase_[i % wordDataBase_.size()];
        result.push_back(word);
    }

    return result;
}