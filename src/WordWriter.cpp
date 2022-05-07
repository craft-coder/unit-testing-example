#include "WordWriter.h"
#include <algorithm>
#include <iostream>

namespace justi {
void WordWriter::printRandomWordsToUpper(std::size_t numWords) {
    auto words = wordGenerator_.generate(numWords);

    for (auto word : words) {
        std::transform(word.begin(), word.end(), word.begin(), ::toupper);
        output_.write(word);
    }
}

} // namespace justi