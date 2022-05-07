#include "WordGenerator.h"
#include "WordWriter.h"
#include "ConsoleOutput.h"

using namespace justi;

int main(int argc, char** argv) {

    WordGenerator wordGenerator;
    ConsoleOutput output;
    WordWriter wordWriter{wordGenerator, output};

    auto numWords = 5;
    if (argc > 1) {
        try {
            numWords = std::stoi(argv[1]);
        } catch (...) {
        }
    }

    wordWriter.printRandomWordsToUpper(numWords);

    return 0;
}