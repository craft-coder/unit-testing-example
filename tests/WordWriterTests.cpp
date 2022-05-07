#include "ConsoleOutput.h"
#include "WordGenerator.h"
#include "WordWriter.h"

using namespace justi;

int main() {
    WordGenerator wordGenerator;
    ConsoleOutput output;
    WordWriter wordWriter{wordGenerator, output};

    // We would like to test, if wordWriter properly transforms words to upper case
    wordWriter.printRandomWordsToUpper(5);

    // Problem: We cannot test the result
}
