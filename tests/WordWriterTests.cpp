#include "OutputFake.h"
#include "WordGeneratorFake.h"
#include "WordWriter.h"
#include <iostream>

using namespace justi;
using namespace testing;
using Words = WordGeneratorInterface::Words;

TEST(WordWriter, Example1) {
    //Setup
    WordGeneratorFake wordGenerator;
    EXPECT_CALL(wordGenerator, generate(_)).WillRepeatedly(Return(Words{"abc", "def"}));

    // Expectations
    OutputFake output;
    EXPECT_CALL(output, write("ABC")).Times(1);
    EXPECT_CALL(output, write("DEF")).Times(1);

    WordWriter wordWriter{wordGenerator, output};

    // Action
    wordWriter.printRandomWordsToUpper(1);
}
