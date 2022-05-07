#include "OutputFake.h"
#include "WordGeneratorFake.h"
#include "WordWriter.h"
#include <iostream>

using namespace justi;
using Words = WordGeneratorInterface::Words;

int main() {
    //Setup
    WordGeneratorFake wordGenerator;
    wordGenerator.wordDataBase_ = Words{"abc"};
    OutputFake output;

    WordWriter wordWriter{wordGenerator, output};

    // Action
    wordWriter.printRandomWordsToUpper(1);

    // Assertion
    auto expectedOutput = "ABC";
    auto resultingOutput = output.writtenStuff[0];

    if (expectedOutput == resultingOutput) {
        std::cout << "Test successfull" << std::endl;
    } else {
        std::cout << "Test failed" << std::endl;
    }

}
