#include "ConsoleOutput.h"
#include <iostream>

using namespace justi;

void ConsoleOutput::write(const std::string& input) {
    std::cout << input << std::endl;
}