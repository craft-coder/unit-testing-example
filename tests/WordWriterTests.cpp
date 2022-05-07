#include "WordWriter.h"

using namespace justi;

int main() {
    WordGenerator wordGenerator;
    Output output;
    WordWriter wordWriter{wordGenerator, output};

    wordWriter.printRandomWordsToUpper(5);

    // Problem: We cannot test the result
}
