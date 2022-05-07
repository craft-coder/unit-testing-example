#include "OutputInterface.h"
#include "gmock/gmock.h"

namespace justi {
class OutputFake : public OutputInterface {
  public:
    MOCK_METHOD(void, write, (const std::string&), (override));
};
} // namespace justi