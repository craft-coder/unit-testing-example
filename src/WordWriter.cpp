#include "WordWriter.h"
#include <algorithm>
#include <iostream>

namespace justi {
void WordWriter::printToUpper(std::string input) {
    std::transform(input.begin(), input.end(), input.begin(), ::toupper);
    output_.write(input);
}

} // namespace justi