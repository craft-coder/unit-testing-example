#include "OutputInterface.h"
#include <string>
#include <vector>

namespace justi {
class OutputFake : public OutputInterface {
  public:
    void write(const std::string& input) override { writtenStuff.push_back(input); }

    std::vector<std::string> writtenStuff;
};
} // namespace justi