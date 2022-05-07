add_executable(WordWriterTests WordWriterTests.cpp)
target_link_libraries(WordWriterTests PRIVATE WordWriterLib
                                              gmock
                                              gtest_main)