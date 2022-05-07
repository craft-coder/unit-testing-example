#include "WordWriter.h"

using namespace justi;

int main(int argc, char** argv) {

    WordWriter wordWriter{};

    for (auto i = 1; i < argc; i++) {
        auto input = std::string(argv[i]);
        wordWriter.printToUpper(input);
    }

    return 0;
}